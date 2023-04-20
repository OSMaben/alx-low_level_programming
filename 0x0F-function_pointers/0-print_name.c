
#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name ->function that printsa name
 *
 * @name:name that shoudl be printed
 * @f: Pointer To A Function
 * Return: NOTHING
 */


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);

}
