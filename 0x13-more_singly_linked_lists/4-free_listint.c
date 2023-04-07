#include "lists.h"
/**
 * free_listint - function that frees a listint_t
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
