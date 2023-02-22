#include "main.h"
#include <stdio.h>
/**
 *_strlen - Length of string
 *@s: is a character
 *Return: Does something
 */

int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
	i++;
return (i);
}
