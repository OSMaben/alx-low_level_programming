#include <stdio.h>

/**
 * print_triangle - print a triangle 
 */

void print_triangle(int size)
{
    int spaces;
    int hash;
    int j;
    int i;

    j = size;
    hash = 1;
    while (size > 0)
    {
        spaces = j - hash;
        i = hash;
        while (spaces > 0)
        {
            putchar(' ');
            spaces--;
        }
        while (i--)
            putchar('#');
        putchar('\n');
        hash++;
        size--;
    }
}
