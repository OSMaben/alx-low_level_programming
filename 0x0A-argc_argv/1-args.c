#include <stdio.h>
/**
 * main - this program prints the number of arguments passed into it
 *
 * @argc number of arguments
 * @argv arguments vector
 *
 * returns: number of arguments
*/
int main(int argc, __attribute__((unused)) char **argv)
{
    if (argc == 1)
        printf("%d\n",argc - 1);

    else
        printf("%d\n",argc - 1);

    return  0;
}