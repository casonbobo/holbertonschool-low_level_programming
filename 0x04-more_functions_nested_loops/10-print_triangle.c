/**
 *print_triangle - makea da triangle
 *@size: again. doesnt matter
 *Return: return something
 */

#include "main.h"

void print_triangle(int size)
{
int p;
int i;
int c;
if (size > 0)
{
	for (i = 0; i < size; i++)
	{
		p = 1;
		p += i;
		for (c = 1; c <= size; c++)
		{
			if (size <= p)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
			p++;
		}
		_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
