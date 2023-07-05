#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list_t
 * @h: a pointer to elemenets espacially the first element
 *
 * Return: the number of elemetns or the length
 *
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
