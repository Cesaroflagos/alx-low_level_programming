#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c: Character to be checked
 * Return: 1 for digit character or otherwise 0
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
