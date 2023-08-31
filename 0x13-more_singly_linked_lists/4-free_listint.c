#include "lists.h"
/**
  * free_listint - free list
  * @head:link start
  * Return:void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
