#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int j;
	unsigned long int jnt = 1;
	unsigned long int gnt = 2;
	unsigned long int v = 1000000000;
	unsigned long int jnt1;
	unsigned long int jnt2;
	unsigned long int gnt1;
	unsigned long int gnt2;

	printf("%lu", jnt);

	for (j = 1; j < 91; j++)
	{
		printf(", %lu", gnt);
		gnt += jnt;
		jnt = gnt - jnt;
	}

	jnt1 = (jnt / v);
	jnt2 = (jnt % v);
	gnt1 = (gnt / v);
	gnt2 = (gnt % v);

	for (j = 92; j < 99; j++)
	{
		printf(", %lu", gnt1 + (gnt2 / v));
		printf("%lu", gnt2 % v);
		gnt1 = gnt1 + jnt1;
		jnt1 = gnt1 - jnt1;
		gnt2 = gnt2 + jnt2;
		jnt2 = gnt2 - jnt2;
	}
	printf("\n");
	return (0);
}
