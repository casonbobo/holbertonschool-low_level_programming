#include "function_pointers"

/**
 *print_name - print my name
 *@name: my name is
 *@f: fffffff (flip flop)
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
