#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: character
 * @s2: character
 * Return: compare value
 */
int _strcmp(char *s1, char *s2)
{
int c, compare;

c = 0;
while (s1[c] == s2[c] && s1[c] != '\0')
{
c++;
}
compare = s1[c] - s2[c];
return (compare);
}
