#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t
 * @h: head of linked list
 * Return: number of elements in a linked listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
