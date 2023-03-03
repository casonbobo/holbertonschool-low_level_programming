#include "3-calc.h"
/**
 *main - please work dear jesus
 *@argc: this counts the arguments
 *@argv: this is going to fight gru
 *Return: can return all sorts of things
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*operator)(int, int);
	
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2] == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	operator = get_op_func(argv[2]);

	if ((*argv[2] == '/' || '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(a, b));
	return (0);
}
