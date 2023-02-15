#include "main.h"

/**
 *factorial - does some number stuff
 *
 *Return: Return the reason for existance
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
		return (n + (n - 1));
}
