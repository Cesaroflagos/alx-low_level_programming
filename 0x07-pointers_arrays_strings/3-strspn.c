#include "main.h"
/**
 * _strspn - Starting point
 * @s: character
 * @accept: character
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0;
int c;

while (*s)
{
for (c = 0; accept[c]; c++)
{
if (*s == accept[c])
{
a++;
break;
}
else if (accept[c + 1] == '\0')
return (a);
}
s++;
}
return (a);
}
