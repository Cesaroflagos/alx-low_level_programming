#include "main.h"
/**
 * _puts - fuction that prints a string
 * @str: character
 * Return new line
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
