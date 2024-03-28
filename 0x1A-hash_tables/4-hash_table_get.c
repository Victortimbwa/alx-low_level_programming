#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to look for in the hash table.
 *
 * Return: The value associated with the element, or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
