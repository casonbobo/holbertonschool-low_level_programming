#include "holberton.h"
/**
 *reverse_array - reverses an array
 *@a: aaaaaaaa
 *@n: nnnnnnnn
 *Return: nuthin
 */
void reverse_array(int *a, int n)
{
	int index = 0;
	int counter = 0;

	while (index < n - 1)
		index++;

	for (; index > 0; index--)
		a[counter++] = a[index];
	a[counter + 1] = '\0';
}
