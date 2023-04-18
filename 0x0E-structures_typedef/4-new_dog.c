#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * dog_t: new name of the type struct dog
 * new_dog: pointer to the new struct
 * @name:of the dog
 * @age:of the dog
 * @owner:of the dog
 *
 * Return: null if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);

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
