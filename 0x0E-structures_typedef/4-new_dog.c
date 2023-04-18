#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog -  Create a new dog variable that pionting to
 * the previous one
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return:Pointer to new dog variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(strlen(name) + 1);
	strcpy(new_dog->name, name);
	new_dog->owner = malloc(strlen(owner) + 1);
	strcpy(new_dog->owner, owner);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
