#include "lists.h"

/**
  * print_listint - this prints all linked list elements
  * @h : linked list to print
  *
  * Return : number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		return (0);
	}
		printf("%d\n", h->n);
		num++;
		h = h->next;

	return (num + print_listint(h->next));
}
