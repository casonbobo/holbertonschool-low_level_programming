#include "hash_tables.h"
/**
 *key_index - a key made for the index
 *@key: a keyyyyy
 *@size: size of the key. Is it big or small
 *Return: Return
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
