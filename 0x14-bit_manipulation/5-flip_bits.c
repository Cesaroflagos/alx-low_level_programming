#include "main.h"
/**
 * flip_bits - Starting point
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int b, c = 0;
unsigned long int cr;
unsigned long int s = n ^ m;

for (b = 63; b >= 0; b--)
{
cr = s >> b;
if (cr & 1)
c++;
}
return (c);
}
