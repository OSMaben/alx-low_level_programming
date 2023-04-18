#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -free dogs
 *@d:pointer d to the struct dog_t
 *
 * Return: Always 0.
 */


void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);

	}


}
