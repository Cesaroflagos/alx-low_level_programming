#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Starting point
 * Return: Repeat 0 (Done)
 */
int main(void)
{
	char cr;

	for (cr = 'z'; cr >= 'a'; cr--)
	putchar(cr);
	putchar('\n');

	return (0);
}
