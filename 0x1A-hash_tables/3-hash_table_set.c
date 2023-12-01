#include "hash_tables.h"

/**
 * hash_table_set - function
 * @ht : hash table
 * @key : key
 * @value : value
 *
 * Return : 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *col;
	hash_node_t *new_node;
	unsigned long int index, i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	col = strdup(value);
	if (!col)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = col;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(col);
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = col;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
