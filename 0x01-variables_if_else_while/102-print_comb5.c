#include <stdio.h>
/**
 * main - Starting point
 * Return: Repeat 0 (Done)
 */
int main(void)
{
	int d, o;

	for (d = 0; d < 100; d++)
	{
	for (o = 0; o < 100; o++)
	{
	if (d < o)
	{
	putchar((d / 10) + 48);
	putchar((d % 10) + 48);
	putchar(' ');
	putchar((o / 10) + 48);
	putchar((o % 10) + 48);
	if (d != 98 || o != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
