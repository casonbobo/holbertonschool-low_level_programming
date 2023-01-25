/**
*Main - HEHE
*Return: HAHA
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 1 >= 1)
{
printf("%n is positive");
else if (n % 1 == 0)
printf("%n is zero");
else if (n % 1 < 0)
printf("%n is negative");
}
return (0);
}
