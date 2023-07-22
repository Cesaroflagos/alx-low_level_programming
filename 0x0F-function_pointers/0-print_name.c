#include "function_pointers.h"

/**
 * print_name - Starting point
 * @name: name to print
 * @f: pointer to function
 * Return:
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
