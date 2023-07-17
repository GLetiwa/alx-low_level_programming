#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the memory allocated for dog struct
 * @d: pointer to the dog struct
 *
 * Description: function releases memory allocated to the dog struct
 * including memory allocated for the name and owner strings
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
