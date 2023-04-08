#include "lists.h"
/**
 * get_nodeint_at_index - 
 * @index: is the index of the node
 * Return: nth node of listint, null if node not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	int i;

	tmp = head;
	i = 0;
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++
	}
	return (tmp != NULL ? tmp : NULL);
}
