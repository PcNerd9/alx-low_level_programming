#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = get_bit(1024, 10);
    printf("%ld\n", n);
    n = get_bit(184467440737095516, 50);
    printf("%ld\n", n);
    n = get_bit(1024, 0);
    printf("%ld\n", n);
    return (0);
}
