#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: head of linked list
 * @index: is the index of the node
 * Return: nth node of listint, null if node not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;
	i = 0;
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp != NULL ? tmp : NULL);
}
