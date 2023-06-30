#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer character
 * Return:
 */
void print_number(int n)
{
unsigned int cr = n;

if (n < 0)
{
_putchar('-');
cr = -cr;
}
if ((cr / 10) > 0)
print_number(cr / 10);
_putchar((cr % 10) + '0');
}
