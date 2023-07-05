#include "main.h"
/**
 * _strlen_recursion - Starting point
 * @s: character
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
int n = 0;

if (*s)
{
n++;
n += _strlen_recursion(s + 1);
}
return (n);
}
