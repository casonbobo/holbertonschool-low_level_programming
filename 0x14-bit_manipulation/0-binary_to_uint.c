#include "main.h"

/**
 *binary_to_uint - takes binary and makes in an integer
 *@b: is a letter and is siblings to a
 *Return: peepeepoopoo
 */

unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	int dec_value;

	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] == '1')
		{
			dec_value = (1 + (2 * index));
		}
		else if (b[index] == '0')
		{
			dec_value = dec_value;
		}
		else
		{
			return (0);
		}
	}
	return (dec_value);
}
