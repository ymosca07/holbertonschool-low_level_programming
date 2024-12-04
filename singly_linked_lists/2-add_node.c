#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - check the code
 * @head: struct
 * @str: string
 * Desc: add new node
 * Return: i
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t count = 0; /* Compteur pour str */
	list_t *i; /* Nouveau node */

	if (str == NULL)
	return (0);

	i = malloc(sizeof(list_t)); /* On donne la taille de la structure a i */
	if (i == NULL)
	return (0);
	i->str = strdup(str); /* Assigne new valeur de str a la structure */

	if (i->str == NULL)
	{
		free(i);
		return (0);
	}

	while (str[count] != '\0') /* Compter nb de caracteres de str */
	{
		count++;
	}

	i->len = count; /* Len = a la variable count */
	i->next = *head; /* Next = a la tete de liste */
	*head = i; /* Tete de liste = a new node */

	return (i); /* Return le nouveau node */

}
