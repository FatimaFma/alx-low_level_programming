#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t
 * @head: head of linked list
 * @str: str to be added in last of list
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *l_node;
	unsigned int l;
	list_t *tmp;

	tmp = *head;
	for (l = 0; str[l] != '\0'; l++)
	{
		;
	}
	l_node = malloc(sizeof(list_t));
	if (l_node == NULL)
	{
		free(l_node);
		return (NULL);
	}
	l_node->len = l;
	l_node->str = strdup(str);
	l_node->next = NULL;
	if (*head == NULL)
	{
		*head = l_node;
		return (l_node);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = l_node;
	return (l_node);
}

