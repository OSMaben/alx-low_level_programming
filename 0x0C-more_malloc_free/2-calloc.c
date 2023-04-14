#include "main.h"
#include <string.h>
/**
* _calloc -a function that allocates memory
* for an array, using malloc
*
* @nmemb: elements of size bytes
* @size: size of bytes
*
* Return: If the function fails, it should return NULL
*
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int b;

if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
for (b = 0; b < (nmemb * size); b++)
a[b] = 0;
return (a);
}

