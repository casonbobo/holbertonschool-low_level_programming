#include <stdio.h>
/**
 *_puts - it puts
 *@str: pee pee poo poo
 *Return: return nothung
 */
#include "main.h"
void _puts(char *str)
{
int i;
for (i = 0; str[i]; i++)
	_putchar(str[i]);
_putchar('\n');
}
