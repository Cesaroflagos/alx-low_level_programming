#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Starting point
 * @separator: string
 * @n: number
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int v;
char *str;

va_list ap;

va_start(ap, n);

for (v = 0; v < n; v++)
{
str = va_arg(ap, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (v != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
