/**
 *_isalpha - Ome more time
 *@c: c is a letter
 *Return: 0 or 1
 */

#include "main.h"

int _isalpha(int c)
{

if (c >= 'a' && c <= 'z')
	return (1);
else if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
