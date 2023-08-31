#include "lists.h"
/**
  * get_nodeint_at_index - gets nth value
  * @head:start of list
  * @index: index of node starting 0
  * Return: listint_t
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	else if (index == 0)
	{
		return (head);
	}
	else
	{
		count = 0;
		current = head;
		while (count <= index)
		{
			if (count == index)
			{
			return (current);
			}
		current = current->next;
		count++;
		}
	}
	return (NULL);
}
