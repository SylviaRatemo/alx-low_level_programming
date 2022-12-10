#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive ",(signed int)n);
}
else
{
    if (n < 0)
    {
        printf("%d is negative ",(signed int)n);
    }
    else
    {
        printf("%d is zero ",(signed int)n);
    }
}
return (0);
}
