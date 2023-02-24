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

	if (nmemb || size == NULL)
		return (NULL);
	P = malloc(sizeof(size) * nmemb);
	return (P);
}
