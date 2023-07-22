#include "function_pointers.h"

/**
 * array_iterator - Starting point
 * @array: array
 * @size: size
 * @action: pointer to print in regular or hex
 * Return:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;

if (array == NULL || action == NULL)
return;
for (a = 0; a < size; a++)
{
action(array[a]);
}
}
