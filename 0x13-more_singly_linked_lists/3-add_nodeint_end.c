#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * @head: head of linked list
 * @n: number of nwe node
 * Return: address of the new element, NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *e_node;
	listint_t *tmp;

	e_node = malloc(sizeof(listint_t));
	tmp = *head;
	if (e_node == NULL)
	{
		return (NULL);
		free(e_node);
	}
	e_node->n = n;
	e_node->next = NULL;
	if (*head == NULL)
	{
		*head = e_node;
		return (e_node);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = e_node;
	return (e_node);	
}
