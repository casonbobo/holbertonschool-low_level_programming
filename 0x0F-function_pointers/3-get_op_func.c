#include "3-calc.h"
/**
 *get_op_func - get this
 *@s: commere pointer
 *Return: I'm not sure yet
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (s != 1)
		return (NULL);

	while (s != ops[i])
		i++;

	return (ops[i + 1]);
}
