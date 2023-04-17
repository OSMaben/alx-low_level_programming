#include "dog.h"
#include <string.h>

/**
 * int_dog - nitialize a variable of type struct dog
 * @d: pointer to struct
 * @name: a pointer to the name of the dog
 * @age: pointer to the age of the dog
 * @owner: pointer to the owner of the dog
 */
void int_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	trcpy(d->owner, onwer);
}

