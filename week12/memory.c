#include<stdio.h>
int* BP, * SP;
int stack[1024];
int stackIndex = 0;

void Show() {
	printf("-----------------------------------------------\n");
	printf("현재 스택 상태 (Top -> Bottom):\n");
	for (int i = stackIndex - 1; i >= 0; i--) {
		int* addr = (int*)stack[i];
		int actualValue = *addr;
		printf("스택[%d]: %p(주소값), %d(실제값)\n", i,(void*)addr, actualValue);
	}
	printf("Base pointer: %p\n", (void*)BP);
	printf("Sase pointer: %p\n", (void*)SP);
	printf("-----------------------------------------------\n");

}
void push(int value) {
	stack[stackIndex++] = value;

	SP = &stack[stackIndex];
}
int pop() {
	if (stackIndex > 0) {
		SP = &stack[--stackIndex];
		return stack[stackIndex];
	}
	return -1;
	
}
void Test(int a, int b, int c) {
	int x = a + b;
	int y = b + c;
	int z = c + a;

	printf("Test() 함수 진입- 스택 프레임 생성\n");
	//push((int)BP);
	BP = &stack[stackIndex - 3];
	push((int)&x);
	push((int)&y);
	push((int)&z);

	
	Show();

	printf("Test() 함수 반환 - 스택 프레임 해제\n");
	pop(); pop(); pop();
	BP = &stack[stackIndex + 3];
	Show();
}
int main()
{
	int a = 10,
		b = 20,
		c = 30;

	printf("Main() 함수 시작 - 초기 스택 상태\n");
	push((int)&a);
	push((int)&b);
	push((int)&c);

	BP = &stack[0];
	Show();

	printf("Test() 함수 호출\n");
	Test(a, b, c);
	

	printf("메인 함수 종료- 스택 상태 복구\n");
	
	pop(); pop(); pop();
	Show();
	return 0;
}