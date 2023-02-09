#include "holberton.h"
/**
 *reverse_array - reverses an array
 *@a: aaaaaaaa
 *@n: nnnnnnnn
 *Return: nuthin
 */
oid reverse_array(int *a, int n)
{
	int temp;
	int index;

	index = n - 1;

	while (index >= n / 2)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
		index--;
	}
}
