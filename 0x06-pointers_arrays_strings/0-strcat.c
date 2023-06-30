#include "main.h"
/**
 * _strcat - Appends the src string to dest string
 * @dest: string character
 * @src: string character
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int l_string, a;

l_string = 0;

while (dest[l_string] != '\0')
{
l_string++;
}
for (a = 0; src[a] != '\0'; a++, l_string++)
{
dest[l_string] = src[a];
}
dest[l_string] = '\0';
return (dest);
}
