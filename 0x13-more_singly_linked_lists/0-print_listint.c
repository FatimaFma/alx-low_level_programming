#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list
 * @h: head of linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
