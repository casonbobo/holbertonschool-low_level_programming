#include <unistd.h>

/**
 *_putchar - writes a character set
 *@c: the character
 *Return: return something
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
