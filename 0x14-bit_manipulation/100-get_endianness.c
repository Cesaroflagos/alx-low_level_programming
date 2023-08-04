#include "main.h"
/**
 * get_endianness - Starting point
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int b = 1;
char *c = (char *) &b;

return (*c);
}
