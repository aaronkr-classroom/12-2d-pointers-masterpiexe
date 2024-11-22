#include"stdio.h"
#include"malloc.h"
int main()
{
	unsigned char limit_table[3];
	unsigned char* p[3];
	int age, member, temp, sum;
	for (age = 0; age < 3; age++)
	{
		printf("\n%d0´ë ¿¬·ÉÀÇ À­¸öÀÏÀ¸Å°±â È½¼ö\n", age + 2);
		printf("ÀÌ ¿¬·É´ë´Â ¸î ¸í ÀÔ´Ï±î? : ");
		
		scanf_s("%d", &temp);
		limit_table[age] = (unsigned char)temp;
		p[age] = (unsigned char*)malloc(limit_table[age]);
		for (member = 0; member < limit_table[age]; member++)
		{
			printf("%dth: ", member + 1);

			scanf_s("%d", &temp);
			*(p[age] + member) = (unsigned char)temp;
		}

	}
	printf("\n\n ¿¬·Éº° Æò±Õ À­¸ö ÀÏÀ¸Å°±â È½¼ö\n");
	for (age = 0; age < 3; age++)
	{
		sum = 0;
		printf("%d0´ë: ", age + 2);
		for (member = 0; member < limit_table[age]; member++)
		{
			sum = sum + *(p[age] + member);
		}
		printf("%5.2f\n", (double)sum / limit_table[age]);
		free(p[age]);
	}
}