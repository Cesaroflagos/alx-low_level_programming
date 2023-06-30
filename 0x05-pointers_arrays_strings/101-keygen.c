#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Starting point
 * Return: 0 (Done)
 */
int main(void)
{
char psw[84];
int index = 0, sum = 0, diff_half1, diff_half2;

srand(time(0));

while (sum < 2772)
{
psw[index] = 33 + rand() % 94;
sum += psw[index++];
}
psw[index] = '\0';

if (sum != 2772)
{
diff_half1 = (sum - 2772) / 2;
diff_half2 = (sum - 2772) / 2;

if ((sum - 2772) % 2 != 0)
diff_half1++;

for (index = 0; psw[index]; index++)
{
if (psw[index] >= (33 + diff_half1))
{
psw[index] -= diff_half1;
break;
}
}
for (index = 0; psw[index]; index++)
{
if (psw[index] >= (33 + diff_half2))
{
psw[index] -= diff_half2;
break;
}
}
}
printf("%s", psw);
return (0);
}
