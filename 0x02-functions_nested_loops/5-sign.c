/**
*print_sign - prints sign duh
*@n: is number duh
*Return: Return alot of things
*/

#include "main.h"

int print_sign(int n)
{
if (n > 0)
{
	return (1);
	_putchar('+');
}
else if (n < 0)
{
	return (-1);
	_putchar('-');
}
else
{
	return (0);
	_putchar('0');
}
}
