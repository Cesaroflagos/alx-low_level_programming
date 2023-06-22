#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
char cr;

for (cr = '0'; cr <= '9'; cr++)
{
if (!(cr == '2' || cr == '4'))
_putchar(cr);
}
_putchar('\n');
}
