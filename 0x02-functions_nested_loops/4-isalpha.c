#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 if character is a letter, 0 if not
 */
int _isalpha(int c)
{

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
return (0);
}
