/**
*main - does the fizzy fizzy
*Return: BUZZZZZZZZZ
*/
#include <stdio.h>

int main(void)
{
int n = 1;

for (; n <= 99; n++)
{
	if (n % 15 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (n % 5 == 0)
	{
		printf("Buzz ");
	}
	else if (n % 3 == 0)
	{
		printf("Fizz ");
	}
	else
	{
		printf("%d ", n);
	}
}
printf("Buzz");
printf("\n");
return (0);
}
