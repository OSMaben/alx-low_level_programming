#include "main.h"
/**
 * print_binary - function that prints the binary string
 * 
 * @n: the number of bytes
 * 
 * Return: Nothing
*/

void print_binary(unsigned long int n)
{
    unsigned long int binary = 1;
    int i = 0;

    while (binary <= n)
    {
        binary <<= 1;
        i++;
    }
    if (i != 0)
        binary >>= 1;

    while (binary != 0)
    {
        if (n & binary)
            _putchar('1');
        else
            _putchar('0');

        binary >>= 1;     
    }
    
}