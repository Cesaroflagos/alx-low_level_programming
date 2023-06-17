#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Starting point
 * Return: Repeat 0 (Done)
 */
int main(void)
{
	int c, m;

	for (c = 48; c <= 56; c++)
	{
	for (m = 49; m <= 57; m++)
	{
	if (m > c)
	{
	putchar(c);
	putchar(m);
	if (c != 56 || m != 57)
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
