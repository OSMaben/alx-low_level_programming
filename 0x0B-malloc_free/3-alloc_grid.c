#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: return NULL on failure
 */

int **alloc_grid(int width, int height)
{
int **grd;
int Lp, sp;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grd = (int **) malloc(sizeof(int *) * height);
if (grd == NULL)
{
return (NULL);
}

for (Lp = 0; Lp < height; Lp++)
{
grd[Lp] = (int *) malloc(sizeof(int) * width);
if (grd[Lp] == NULL)
{
for (sp = 0; sp < Lp; sp++)
{
free(grd[sp]);
}
free(grd);
return (NULL);
}
for (sp = 0; sp < width; sp++)
{
grd[Lp][sp] = 0;
}
}

return (grd);
}
