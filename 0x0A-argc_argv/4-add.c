#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int n1, n2, sum = 0;
		for (n1 = 1; 1 < argc; i++)
		{
			for (d = 0; argv[n1][n2]; n2++)
			{
				if (argv[n1][n2] < '0' || argv[n1][n2] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[n1]);
		}
		printf("%d\n", sum);
		return (0);
}
