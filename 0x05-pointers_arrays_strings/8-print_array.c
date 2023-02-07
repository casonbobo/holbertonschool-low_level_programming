#include "main.h"
/**
 *print_array - whats an array?
 *@a: oh you mean...
 *@n: oh i see
 *Return: oh i get it
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
