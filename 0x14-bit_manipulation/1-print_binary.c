#include "main.h"

/**
 * print_binary - Starting point
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int cr;

for (i = 63; i >= 0; i--)
{
cr = n >> i;

if (cr & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
