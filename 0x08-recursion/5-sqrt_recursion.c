#include "main.h"

int actual_sqrt_recursion(int n, int i);
 /**
 * sqrt_recursion - Starting point
 * @n: character
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_recursion(n, 0));
}
