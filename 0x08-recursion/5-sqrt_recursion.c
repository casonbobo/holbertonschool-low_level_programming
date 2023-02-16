#include "main.h"
/**
 *_sqrt_recursion - watch it there squirt
 *@n: night night
 *Return: return what though
 */

int _sqrt_recursion(int n)
{
	int c = 0;

	if (n != '\0')
		if (c * c != n)
			_sqrt_recursion(c++);
		else
			return (c);
	else
		return (-1);
	return (0);
}
