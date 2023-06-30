#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: buffer storage character
 * @src: source string character
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int cs;

for (cs = 0; cs < n && src[cs] != '\0'; cs++)
dest[cs] = src[cs];
for (; cs < n; cs++)
dest[cs] = '\0';

return (dest);
}
