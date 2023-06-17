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
	char cr;

	for (a = 48; a < 58; a++)
	putchar(a);
	for (cr = 'a'; cr <= 'f'; cr++)
	putchar(cr);
	putchar('\n');

	return (0);
}
