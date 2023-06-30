#include "main.h"
/**
 * reverse_array - Reverses the content of an array pf integers
 * @a: character
 * @n: character
 * Return: 0 (Done)
 */
void reverse_array(int *a, int n)
{
int tmp, c;

for (c = n - 1; c >= n / 2; c--)
{
tmp = a[n - 1 - c];
a[n - 1 - c] = a[c];
a[c] = tmp;
}
}
