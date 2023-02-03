/**
*main - does the fizzy fizzy
*Return: BUZZZZZZZZZ
*/
#include "main.h"

int main(void)
{
int n = 0;

for (; n == 100; n++)
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
return (0);
}
