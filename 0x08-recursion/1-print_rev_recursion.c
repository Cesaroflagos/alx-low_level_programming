#include "main.h"
/**
 * _print_rev_recursion - Starting point
 * @s: character
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
