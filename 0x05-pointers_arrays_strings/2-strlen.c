#include "main.h"
/**
 * _strlen - function that returns length of a string
 * @s: - character for string
 * Return: the length of @s
 */
int _strlen(char *s)
{

int length = 0;

while (*s++)
length++;
return (length);
}
