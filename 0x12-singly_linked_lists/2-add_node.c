#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t
 * @head: head of linked list
 * @str: string to be added
 * Return: the address of the new element, Null if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int l;

	for (l = 0; str[l] != '\0'; l++)
		;
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->len = l;
	n_node->str = strdup(str);
	n_node->next = (*head);
	(*head) = n_node;
	return (n_node);
}
