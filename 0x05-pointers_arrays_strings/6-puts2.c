#include "main.h"
#include <stdio.h>
/**
 *puts2 - puts strikes back
 *@str: dingle dangle
 *Return: nuthin homie
 */

void puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
