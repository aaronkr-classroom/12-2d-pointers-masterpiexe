#include<stdio.h>
int main() {
	short data = 3,
		* p = &data,// data ������ �ּ� ���� 1���� ������ p�� �����Թ̴�
		** pp = &p;//1���� ������ p������ �ּ� ���� 2���� ������ pp�� �����չ̴�

	printf("[Before ] data: %d\n", data);
	*p = 40;//data ���� 40�� �����չ̴�
	printf("[Usage of *p ] data: %d\n", data);//Forty
	**pp = 500;//�׷����������ô� �ƴѵ���� �迭���� ���� �𸦱�..........
	printf("[usage of **pp ] data: %d\n", data);

	return 0;
}