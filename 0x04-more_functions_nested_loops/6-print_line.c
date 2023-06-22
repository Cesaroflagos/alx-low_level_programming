#include "main.h"
/**
 * print_line - print a straight line on the terminal
 * @n:number of times
 * Return: 0 (Done)
 */
void print_line(int n)
{
int s;

for  (s = 0; s < n; s++)
{
_putchar('_');
}
_putchar('\n');
}
