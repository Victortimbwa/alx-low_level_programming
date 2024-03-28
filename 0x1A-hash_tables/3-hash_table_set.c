#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add or update in the hash table. Cannot be an empty string.
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists and update value if it does*/
	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);  /*Free the old value*/
			node->value = strdup(value);  /* Duplicate and set the new value*/
			if (node->value == NULL)
				return (0);
			return (1);
		}
	}

	/* Key does not exist, create a new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
