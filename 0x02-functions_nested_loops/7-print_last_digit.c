#include "main.h"
/**
 * print_last_digit - Prints last digit
 * @c: the number to be checked
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int pld;

	pld = c % 10;
	if (pld < 0)
	{
	pld = pld * -1;
	}
	_putchar(pld + '0');
	return (pld);
}
