#include "lists.h"
#include <stdio.h>
/**
 * free_list - function that frees a list_t
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
