#include "main.h"
/**
 * _memcpy - Starting point
 * @dest: character
 * @src: character
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 0;

while (a < n)
{
dest[a] = src[a];
a++;
}
return (dest);
}
