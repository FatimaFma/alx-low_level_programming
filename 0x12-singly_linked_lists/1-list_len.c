#include "lists.h"
#include <stdio.h>
/**
 * list_len -  function that returns the number of elements in a linked list
 * @h: head of linked lidt
 * Return: number of element in linked list
 */
size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
