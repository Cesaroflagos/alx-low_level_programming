#include "main.h"
/**
 * print_alphabet_x10 - Make each alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{

char lc;
int x;

for (x = 0; x <= 9; x++)
{
for (lc = 'a'; lc <= 'z'; lc++)
_putchar(lc);
_putchar('\n');
}
}
