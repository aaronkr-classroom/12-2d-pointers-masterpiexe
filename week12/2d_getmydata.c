#include<stdio.h>
#include"malloc.h"
void GetMyData(int** q)
{
	*q = (int*)malloc(8);
	free(*q);
}
int main()
{
	int* p;
	GetMyData(&p);
	*p = 5;
	printf("*p: %p\n", *p);
	printf("*p: %d", *p);
	free(p);

	return 0;
}