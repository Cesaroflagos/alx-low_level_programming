#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Starting Point
 * Return: Repeat 0 (Done)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	putchar(a);
	if (a != 58)
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
