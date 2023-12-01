#include "hash_tables.h"

/**
 * hash_table_print - function
 * @ht: the hash table
 *
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	short c = 0;
	unsigned long int i;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (c == 1)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);

			if (c == 0)
				c = 1;

			node = node->next;
		}
	}
	printf("}\n");
}
