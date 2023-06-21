#include <stdio.h>
/**
 * main - Starting point
 * Return: 0
 */
int main(void)
{
int a = 0;
long j = 1, c = 2, max = c;

while (c + j < 4000000)
{
c += j;
if (c % 2 == 0)
max += c;
j = c - j;
++a;
}
printf("%ld\n", max);
return (0);
}
