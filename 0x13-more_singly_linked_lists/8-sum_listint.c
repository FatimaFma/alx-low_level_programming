#include "lists.h"
/**
 * sum_listint - function returns the sum of all the data (n) of a listint_t
 * @head: head of linked list
 * Return: sum of all the data (n) of a listint_
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
