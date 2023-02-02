/**
*more_numbers - prints... numbers...
*Return: nothing
*/

#include "main.h"

void more_numbers(void)
{

int i;
int c;

for (c = 0; c < 10; c++)
{
	for (i = 0; i <= 14; i++)
	{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
return;
}
