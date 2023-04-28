#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%ld]", strlen(h->str));
		if (h->str != NULL)
		{
			printf("%s\n",h->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		h = h->next;
		i++;
	}
	return (i);
}
