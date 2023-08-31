#include "lists.h"
/**
  * print_listint- print all elements
  * @h: the list
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 1;
	
	if (h == NULL)
	{
		return (0);
	}
	printf("%d\n", h->n); /* prints current node value */
	return (count + print_listint(h->next));
} 
