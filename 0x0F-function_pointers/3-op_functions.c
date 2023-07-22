#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Starting point
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Starting point
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Starting point
 * @a: first number
 * @b: second number
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Starting point
 * @a: first number
 * @b: second number
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - Starting point
 * @a: first number
 * @b: second number
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
return (a % b);
}
