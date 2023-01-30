/**
*print_to_98 - AROOOOOGH
*@n: yo bro get in here
*Return: UM ye
*/
#include "main.h"
void print_to_98(int n)
{
if (n >= 98)
{
	while (n > 98)
		printf("%d, ", n--);
		printf("%d\n", n);
}
else
{
	while (n < 98)
		printf("%d, ", n++);
		printf("%d\n", n);
}
}
