#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first integer character
 * @b: second integer character
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int change;

change = *b;
*b = *a;
*a = change;
}
