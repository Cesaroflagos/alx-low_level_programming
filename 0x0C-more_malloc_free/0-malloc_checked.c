#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Starting point
 * @b: number of bytes to allocate
 * Return: points to allocated memory
 */
void *malloc_checked(unsigned int b)
{
char *p;

p = malloc(b);

if (p == NULL)
exit(98);
return (p);
}
