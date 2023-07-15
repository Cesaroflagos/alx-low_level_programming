#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Starting point
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: points to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int m, o, p, q;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (m = 0; s1[m] != '\0'; m++)
;
for (o = 0; s2[o] != '\0'; o++)
;
if (n > o)
n = o;
p = m + n;
s = malloc(p + 1);

if (s == NULL)
return (NULL);

for (q = 0; q < p; q++)
if (q < m)
s[q] = s1[q];

else
s[q] = s2[q - m];

s[q] = '\0';

return (s);
}
