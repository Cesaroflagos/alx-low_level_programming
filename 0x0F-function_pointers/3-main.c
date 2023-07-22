#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints the result of simple operations
 * @argc: number of arguments
 * @argv: array pointers to argument
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int n1, n2;
char *ops;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
n1 = atoi(argv[1]);
ops = argv[2];
n2 = atoi(argv[3]);

if (get_op_func(ops) == NULL || ops[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*ops == '/' && n2 == 0) || (*ops == '%' && n2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(ops)(n1, n2));

return (0);
}
