/**
*more_numbers - prints... numbers...
*Return: nothing
*/

#include "main.h"

void more_numbers(void)
{

int i;
int c;

for (c = 0; c <= 10; c++)
{
	for (i = 0; i <= 14; i++)
		{
		_putchar(i + '0');
		}
	_putchar('\n');
}
_putchar('\n');
return;
}
