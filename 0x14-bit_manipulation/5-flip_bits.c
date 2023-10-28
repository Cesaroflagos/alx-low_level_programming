#include "main.h"

/**
 * flip_bits - Starting point
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int cr;
unsigned long int private = n ^ m;

for (i = 63; i >= 0; i--)
{
cr = private >> i;
if (cr & 1)
count++;
}
return (count);
}
