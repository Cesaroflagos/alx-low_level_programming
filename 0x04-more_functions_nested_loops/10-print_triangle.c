#include "main.h"
/**
 * print_triangle - Starting point
 * @size: size of triangle
 * Return: 0 (Done)
 */
void print_triangle(int size)
{
int spaces, lines, hash;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (lines = 1; lines <= size; lines++)
{
for (spaces = size - lines; spaces >= 1; spaces--)
{
_putchar(' ');
}
for (hash = 1; hash <= lines; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
