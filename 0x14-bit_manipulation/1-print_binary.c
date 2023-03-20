#include "main.h"
/**
 *print_binary - i dont know what this does
 *@n: is a long looooooog number
 *Return: whats a binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
