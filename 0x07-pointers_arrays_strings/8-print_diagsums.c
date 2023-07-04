#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Starting point
 * @a: character
 * @size: character
 * Return: 0 (Done)
 */
void print_diagsums(int *a, int size)
{
int c, n, cr = 0, cc = 0;

for (c = 0; c <= (size * size); c = c + size + 1)
cr = cr + a[c];
for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
cc = cc + a[n];
printf("%d, %d\n", cr, cc);
}
