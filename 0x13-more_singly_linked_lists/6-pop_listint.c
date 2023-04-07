#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: head of linked list
 * Return: the head node data(n);
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
	{
		return (0);
	}
	num = 0;
	tmp = *head;
	num = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (num);
}
