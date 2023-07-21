#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: number
 * @...: variable number
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{

unsigned int v;
int sum = 0;

va_list ap;

va_start(ap, n);

for (v = 0; v < n; v++)
sum += va_arg(ap, int);

va_end(ap);
return (sum);
}
