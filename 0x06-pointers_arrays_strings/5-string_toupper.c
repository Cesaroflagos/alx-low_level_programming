#include "main.h"
/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string character
 * Return: to uppercase string
 */
char *string_toupper(char *str)
{
int alphabet = 0;

while (str[alphabet])
{
if (str[alphabet] >= 'a' && str[alphabet] <= 'z')
str[alphabet] -= 32;
alphabet++;
}
return (str);
}
