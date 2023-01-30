/**
*_islower - SMALL BOI
*@c: c is a letter
* Return: 1 or 0
*/

#include "main.h"

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
