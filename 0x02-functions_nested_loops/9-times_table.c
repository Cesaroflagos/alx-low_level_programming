#include "main.h"
/**
 * times_table - print the 9 times table
 * Return: 0
 */
void times_table(void)
{
int n, multi, pro;

for (n = 0; n <= 9; n++)
{
_putchar('0');
for (multi = 1; multi <= 9; multi++)
{
_putchar('.');
_putchar(' ');

pro = n * multi;
if (pro <= 9)
_putchar(' ');
else
_putchar((pro / 10) + '0');
_putchar((pro % 10) + '0');
}
_putchar('\n');
}
}
