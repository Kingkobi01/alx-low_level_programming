#include <stdlib.h>
#include <string.h>
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
	dog_t *d1;
	int lengthOfName, lengthOfOwner;

	if (name != NULL && owner != NULL)
	{
		lengthOfName = strlen(name) + 1;
		lengthOfOwner = strlen(owner) + 1;

		d1 = malloc(sizeof(dog_t));

		if (d1 == NULL)
			return (NULL);

		d1->name = malloc(lengthOfName);

		if (d1->name != NULL)
		{
			free(d1);
			return (NULL);
		}

		d1->owner = malloc(lengthOfOwner);

		if (d1->owner != NULL)
		{
			free(d1->name);
			free(d1);
			return (NULL);
		}
	}
	d1->name = name;
	d1->age = age;
	d1->owner = owner;

	return (d1);
}
