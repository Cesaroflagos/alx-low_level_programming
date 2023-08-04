#include "main.h"

/**
 * print_binary - Starting point
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int b, c = 0;
unsigned long int cr;

for (b = 63; b >= 0; b--)
{
cr = n >> b;

if (cr & 1)
{
_putchar('1');
c++;
}

else if (c)
_putchar('0');
}

if (!c)
_putchar('0');
}
