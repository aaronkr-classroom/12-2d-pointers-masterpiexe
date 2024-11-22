#include<stdio.h>
int main() {
	short data = 3,
		* p = &data,// data 변수의 주소 값을 1차원 포인터 p에 저장함미다
		** pp = &p;//1차원 포인터 p변수의 주소 값을 2차원 포인터 pp에 저장합미다

	printf("[Before ] data: %d\n", data);
	*p = 40;//data 값을 40로 수정합미다
	printf("[Usage of *p ] data: %d\n", data);//Forty
	**pp = 500;//그렇게좋은예시는 아닌듯싶음 배열에서 쓰면 모를까..........
	printf("[usage of **pp ] data: %d\n", data);

	return 0;
}