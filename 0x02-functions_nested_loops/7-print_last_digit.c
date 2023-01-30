/**
* print_last_digit - Deja Vu
*@r: is number
*Return:Return is amount
*/
#include "main.h"

int print_last_digit(int r)
{
int last = r % 10;

if (r < 0)
	last = -last;

_putchar(last + '0');

return (last);
}
