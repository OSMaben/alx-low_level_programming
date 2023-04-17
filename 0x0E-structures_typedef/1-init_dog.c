#include "dog.h"
#include <string.h>

/**
 * init_dog - nitialize a variable of type struct dog
 * @d: pointer to struct
 * @name: a pointer to the name of the dog
 * @age: pointer to the age of the dog
 * @owner: pointer to the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

