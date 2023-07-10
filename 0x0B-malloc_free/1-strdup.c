#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Starting point
 * @str: - character
 * Return: NULL
 */
char *_strdup(char *str)
{
char *a;
int b, c = 0;

if (str == NULL)
return (NULL);
b = 0;

while (str[b] != '\0')
b++;

a = malloc(sizeof(char) * (b + 1));
if (a == NULL)
return (NULL);

for (c = 0; str[c]; c++)
a[c] = str[c];
return (a);
}
