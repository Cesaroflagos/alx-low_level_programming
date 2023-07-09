#include <stdlib.h>
#include <stdio.h>
/**
 * main - Starting point
 * @argc: argument
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int c, cr = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
c = atoi(argv[1]);

while (c > 0)
{
cr++;
if ((c - 25) >= 0)
{
c -= 25;
continue;
}
if ((c - 10) >= 0)
{
c -= 10;
continue;
}
if ((c - 5) >= 0)
{
c -= 5;
continue;
}
if ((c - 2) >= 0)
{
c -= 2;
continue;
}
c--;
}
printf("%d\n", cr);
return (0);
}
