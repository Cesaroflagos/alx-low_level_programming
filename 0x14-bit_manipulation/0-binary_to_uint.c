#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: strinag
 * Return: NULL
 */
unsigned int binary_to_uint(const char *b)
{
int c;
unsigned int dec = 0;

if (!b)
return (0);

for (c = 0; b[c]; c++)
{
if (b[c] < '0' || b[c] > '1')
return (0);
dec = 2 * dec + (b[c] - '0');
}
return (dec);
}
