#include "variadic_functions.h"

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
if (!str)
str = "nil";
if (!separator)
printf("%s", str);

else if (separator && v == 0)
printf("%s", str);
else
printf("%s%s", separator, str);
}
printf("\n");
va_end(ap);
}
