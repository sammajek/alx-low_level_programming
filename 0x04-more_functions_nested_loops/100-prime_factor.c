#include <stdio.h>
#include "main.h"

/**
 * find_largest_prime_factor - Finds and prints the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 */
void find_largest_prime_factor(long n)
{
    long factor = 2;
    long largest = 0;

    while (n > 1)
    {
        if (n % factor == 0)
        {
            largest = factor;
            n /= factor;
        }
        else
        {
            factor++;
        }
    }
    
    printf("%ld\n", largest);
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
    find_largest_prime_factor(612852475143);
    return 0;
}
