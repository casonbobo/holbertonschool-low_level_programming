#include "hash_tables.h"
/**
 *hash_table_print - hashes hashes hashes
 *@ht: a hash table
 *Return: returns a number of thing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *search;
	int flag = 1;
	unsigned long int i = 0;

	if (!ht)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		search = ht->array[i];
		while (search != NULL)
		{
			if (flag == 0)
				printf(", ");
			printf("'%s': '%s'", search->key, search->value);
			flag = 0;
			search = search->next;
		}
	}
	printf("}\n");
}
