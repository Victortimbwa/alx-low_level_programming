#include "lists.h"
/**
  * list_len - number of elements
  * @h: list
  * Return: number of elements in h
  */
size_t list_len(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + list_len(h->next));
}
