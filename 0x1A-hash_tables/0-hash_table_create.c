#include "hash_tables.h"
/**
 *hash_table_create - create a new for of hell
 *@size: is the size of hell
 *Return: a finger pointer your direction down
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table || !size)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!hash_table->array)
		return (NULL);

	while (index++ < size)
		hash_table->array[index] = NULL;
	hash_table->size = size;
	return (hash_table);

}
