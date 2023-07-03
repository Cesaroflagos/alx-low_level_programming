#include "main.h"
/**
 * print_chessboard - Starting point
 * @a: array
 * Return: 0 (Done)
 */
void print_chessboard(char (*a)[8])
{
int c, n;

for (c = 0; c < 8; c++)
{
for (n = 0; n < 8; n++)
_putchar(a[c][n]);
_putchar('\n');
}
}
