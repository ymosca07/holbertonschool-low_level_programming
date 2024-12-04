#include <stddef.h>

list_t *add_node(list_t **head, const char *str)
{
	size_t count = 0;
	list_t *i;

	if (str == NULL)
	return (NULL);

	i = malloc(sizeof(list_t));
	
	if (i == NULL)
	return (NULL);
	
	i->str = strdup(str);

	if (i->str == NULL)
	{
		free(i);
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}

	i->len = count;
	i->next = *head;
	*head = i;

	return (i);

}
