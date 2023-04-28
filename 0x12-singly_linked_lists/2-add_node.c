#include "lists.h"

/**
 * add_node - a function that adds a node to the biginning of a list_t
 * @head: a doouble pointer to the head of the list
 * @str: a string describing the node
 *
 * Return: the address of the new node element
*/


list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;

return (*head);

}
