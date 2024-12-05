#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - check the code
 * @head: struct
 * @str: string
 * Desc: node a la fin
 * Return: new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *current, *new_node;

	current = *head;
	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}

	while (str[count] != '\0')
	{
		count++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = count;
	new_node->next = NULL;

	if (current != NULL)
	{
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
