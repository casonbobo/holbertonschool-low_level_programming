#include "main.h"

/**
 *_calloc - calloc is malloc good twin
 *@nmemb: member this
 *@size: county county
 *Return: less then nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *P;

	if (nmemb == 0 || size == 0)
		return (NULL);
	P = malloc(nmemb * size);
	if (P == NULL)
		return (NULL);
	return (P);
}
