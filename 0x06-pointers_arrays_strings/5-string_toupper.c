#include "holberton.h"
/**
 * *string_toupper - toooooo upper and beyond
 *@str: spooder man
 *Return: also stringyyy
 */

char *string_toupper(char *str)
{
	index = 0;

	while (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
	return(str);
}
