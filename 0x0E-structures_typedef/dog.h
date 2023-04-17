#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 *
 * @name: his name
 *
 * @age:his Age
 *
 * @owner:and his owner
 */

struct dog
{
		char *name;
		float age;
		char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
