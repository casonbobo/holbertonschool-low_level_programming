#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_all - copy and paste and copy and paste and copy and paste ...
 *@format: format this dummy
 *Return: Probably nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, n = 0;
	char *sep = ", ", *string, c;
	float f;
	va_list arglist;

	va_start(arglist, format);

	while (format && format[n])
		n++;
	while (format && format[i])
	{
		if (i == n - 1)
			sep = "";

		switch (format[i])
		{
			case 'c':
				c = (char) va_arg(arglist, int);
				printf("%d%s", c, sep);
				break;
			case 'i':
				i = va_arg(arglist, int);
				printf("%d%s", i, sep);
				break;
			case 'f':
				f = va_arg(arglist, double);
				printf("%f%s", f, sep);
					break;
			case 's':
				string = va_arg(arglist, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", string, sep);
				break;
		}
		i++;
	}
	va_end(arglist);
	printf("\n");
}
