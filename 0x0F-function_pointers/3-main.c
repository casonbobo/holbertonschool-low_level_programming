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
	char *op;
	int (*operator)(int, int);
	
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error98\n");
		exit(98);
	}

	op = argv[2];
	operator = get_op_func(op);

	if (argv[2][1])
	{
		printf("Error99\n");
		exit(99);
	}

	if ((strcmp(op, "/") == 0 || (strcmp(op, "%") == 0)) && (b == 0))
	{
		printf("Error100\n");
		exit(100);
	}

	printf("%d\n", operator(a, b));
	return (0);
}
