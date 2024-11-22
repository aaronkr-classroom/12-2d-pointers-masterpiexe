#include<stdio.h>
#include<malloc.h>
int main()
{
	char* p_name;
	p_name = (char*)malloc(20);
	if (p_name != NULL)
	{
		printf("Enter your name\n");
		gets(p_name);

		printf("HI~~%s\n", p_name);
		free(p_name);
	}
	else
	{
		printf("Memory allocation error!!\n");
	}
	

}