#include "main.h"
#include <stdlib.h>

/**
 * array_range - Starting point
 * @min: character
 * @max: character
 * Return: NULL
 */
int *array_range(int min, int max)
{
int *c;
int d;

if (min > max)
return (NULL);
c = malloc(sizeof(*c) * ((max - min) + 1));

if (c == NULL)
return (NULL);

for (d = 0; min <= max; d++, min++)
c[d] = min;

return (c);
}
