#include "3-calc.h"
#include <string.h>
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

	if (strlen(s) != 1)
		return (NULL);

	while (s[0] != ops[i].op[0])
		i++;

	return (ops[i].f);
}
