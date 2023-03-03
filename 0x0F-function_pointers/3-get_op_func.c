#include "3-calc.h"
/**
 *get_op_func - get this
 *@s: commere pointer
 *@int: int
 *@int: and int
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
	
	while (s != ops[i])
		i++;

	return (ops[i]);
}
