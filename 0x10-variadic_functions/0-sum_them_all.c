#include "variadic_functions.h"

/**
 *sum_them_all - kill them all
 *@n: county county
 *Return: I'm really sorry Evan
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(list, n);
	while (i < n)
	{
		sum = sum + va_arg(list, int);
		i++;
	}
	va_end(list);

	return (sum);
}
