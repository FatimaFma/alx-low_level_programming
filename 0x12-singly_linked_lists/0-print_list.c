#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: head of linked list
 * Return: the number of nodes
 * 0 if str is null
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		node++;
	}
	return (node);
}
