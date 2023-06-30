#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: character
 * @src: character
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int l_string = 0, a = 0;

while (dest[l_string++])
a++;
for (l_string = 0; src[l_string] && l_string < n; l_string++)
dest[a++] = src[l_string];
return (dest);
}
