/**
 *print_square - draw a cool box
 *@size: doesnt matter
 *Return: 0 probs
 */

#include "main.h"
void print_square(int size)
{
char square = '#';
int c1;
int c2;
for (c1 = 0; c1 <= size; c1++)
	{
	for (c2 = 0; c2 <= size; c2++)
		{
		_putchar(square);
		}
	_putchar('\n');
	}
_putchar('\n');
}
