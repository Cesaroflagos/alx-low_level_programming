#include "main.h"
/**
 * _isupper - Check for upper letters
 * @c:The letter to be checked
 * Return: 1 for upper character  or 0 for otherwise
 */
int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
