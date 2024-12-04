#include <stddef.h>
#include <stdlib.h>

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
	return (NULL);

	i = malloc(sizeof(list_t)); /* On donne la taille de la structure a i */
	
	if (i == NULL)
	return (NULL);
	
	i->str = strdup(str); /* Assigne new valeur de str a la structure */

	if (i->str == NULL)
	{
		free(i);
		return (NULL);
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
