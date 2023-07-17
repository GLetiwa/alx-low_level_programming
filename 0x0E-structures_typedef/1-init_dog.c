#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variables of type struct dog
 * @d: pointer to struct dog
 * @name: variable to initialize
 * @age: variable to initialize
 * @owner: variable to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
