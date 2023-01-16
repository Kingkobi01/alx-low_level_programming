#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - ...
 * @name : ...
 * @age : ...
 * @owner : ...
 * Return: ...
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog d1;
	char *namecpy;
	char *ownercpy;

	struct dog *ptr = malloc(sizeof(struct dog));

	if (ptr == NULL)
		return (NULL);

	ptr = &d1;

	namecpy = name;
	ownercpy = owner;

	ptr->name = namecpy;
	ptr->age = age;
	ptr->owner = ownercpy;
	return (ptr);
}
