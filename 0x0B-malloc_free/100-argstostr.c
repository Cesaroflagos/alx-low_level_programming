#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *argstostr - Starting point
 * @ac: character
 * @av:character
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
int cr = 0, m = 0, n = 0, o = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

while (m < ac)
{
while (av[m][n])
{
cr++;
n++;
}
n = 0;
m++;
}
s = malloc((sizeof(char) * cr)+ac + 1);
m = 0;

while (av[m])
{
while (av[m][n])
{
s[o] = av[m][n];
o++;
n++;
}
s[o] = '\n';
n = 0;
o++;
m++;
}
o++;
s[o] = '\0';
return (s);
}
