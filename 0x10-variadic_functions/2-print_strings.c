#include "variadic_functions.h"
/**
 *print_strings - a loom prints strings
 *@separator: separates
 *@n: i do declare
 *Return: nothing im quite sure
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int = 0;
	va_list list;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);
	while (i < n - 1)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL)
			printf("%s", separator);
		i++;
	}
	str = va_arg(list, char *);
	if (str == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", str);
	va_end(list);
}
