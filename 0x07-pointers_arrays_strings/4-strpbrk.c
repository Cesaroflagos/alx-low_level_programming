#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Starting point
 * @s: character
 * @accept: character
 * Return: 0 (Done)
 */
char *_strpbrk(char *s, char *accept)
{
int a, n;

for (a = 0; s[a] != '\0'; a++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[a] == accept[n])
return (s + a);
}
}
return (0);
}
