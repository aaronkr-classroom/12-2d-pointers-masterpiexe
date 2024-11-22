#include"stdio.h"
int main()
{
	int ages,
		member,
		temp,
		sum;
	unsigned char limit_table[3] = { 4,2,3 };
	unsigned char count[3][4];


	for (ages = 0; ages < 3; ages++)
	{
		printf("\n%d0´ë ¿¬·ÉÀÇ À­¸ö ÀÏÀ¸Å°±â È½¼ö\n", ages + 2);

		for (member = 0; member < limit_table[ages]; member++)
		{
			printf("#%d: ", member + 1);

			scanf_s("%d", &temp);
			count[ages][member] = (unsigned char)temp;
		}
	}
	for (ages = 0; ages < 3; ages++)
	{
		sum = 0;
		printf("%d0´ë: ", ages + 2);
	}
	printf("\n\n average of sit-ups classified by ages\n");
	return 0;
}