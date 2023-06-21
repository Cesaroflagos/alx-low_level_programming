#include <stdio.h>
/**
 * main - Starting point
 * Return: 0 (Done)
 */
int main(void)
{
	int c;
	unsigned long num1 = 0, num2 = 1, max;
	unsigned long num1_half1, num1_half2, num2_half1, num2_half2;
	unsigned long half1, half2;

	for (c = 0; c < 92; c++)
	{
	max = num1 + num2;
	printf("%lu, ", max);
	num1 = num2;
	num2 = max;
	}
	num1_half1 = num1 / 10000000000;
	num2_half1 = num2 / 10000000000;
	num1_half2 = num1 % 10000000000;
	num2_half2 = num2 % 10000000000;
	for (c = 93; c < 99; c++)
	{
	half1 = num1_half1 + num2_half1;
	half2 = num2_half2 + num2_half2;
	if (num1_half2 + num2_half2 > 9999999999)
	{
	half1 += 1;
	half2 %= 10000000000;
	}
	printf("%lu%lu", half1, half2);
	if (c != 98)
	printf(", ");
	num1_half1 = num2_half1;
	num1_half2 = num2_half2;
	num2_half1 = half1;
	num2_half2 = half2;
	}
	printf("\n");
	return (0);
}
