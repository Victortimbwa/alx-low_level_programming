#include "lists.h"
#include <string.h>
/**
  * add_node - adds nodes to list
  * @head: pointer to list
  * @str: string to be added
  * Return: address of new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!str)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (!(head))
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
