#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Starting point
 * @nmemb: charcter
 * @size: size of byte
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *c;
unsigned int d;

if (nmemb == 0 || size == 0)
return (NULL);

c = malloc(nmemb * size);

if (c == NULL)
return (NULL);

for (d = 0; d < (nmemb * size); d++)
c[d] = 0;

return (c);
}
