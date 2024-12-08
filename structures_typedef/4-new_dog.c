#include "main.c"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (new_dog == NULL)
		return (NULL);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
}
