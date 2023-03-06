#include "variadic_functions.h"
/**
 *print_numbers - print some numbers
 *@separator: separator
 *@n: nice night we're having
 *Return: what ever I want
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("%d\n", va_arg(list, int));
}
