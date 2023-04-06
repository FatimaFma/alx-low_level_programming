#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * @head: head of linked list
 * @n: number of new element
 * Return: address of the new element, Null if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
		free(n_node);
	}
	n_node->n = n;
	n_node->next = (*head);
	(*head) = n_node;
	return (n_node);
}
