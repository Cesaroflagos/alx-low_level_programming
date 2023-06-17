#include <stdio.h>
/**
 * main - Starting point
 * Return: Repeat 0 (Done)
 */
int main(void)
{
	char cr = 'a';

	while (cr <= 'z')

	{
	if (cr != 'e' && cr != 'q')

		{

	putchar(cr);

		}
		cr++;
	}
		putchar('\n');
	return (0);
}
