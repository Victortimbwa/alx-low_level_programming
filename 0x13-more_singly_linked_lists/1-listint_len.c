#include "lists.h"
/**
  * listint_len - prints lenth of node
  * @h: list
  * Return: count
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
