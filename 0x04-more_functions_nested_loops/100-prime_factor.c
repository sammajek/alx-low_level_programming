#include "main.h"

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 * Return: the largest prime factor
 */
long largest_prime_factor(long n)
{
    long max_prime = -1;
    long i;

    while (n % 2 == 0)
    {
        max_prime = 2;
        n /= 2;
    }

    for (i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            max_prime = i;
            n /= i;
        }
    }

    if (n > 2)
        max_prime = n;

    return max_prime;
}

/**
 * print_number - prints a number using _putchar
 * @n: the number to be printed
 */
void print_number(long n)
{
    if (n / 10)
        print_number(n / 10);
    _putchar((n % 10) + '0');
}

/**
 * main - finds and prints the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
    long n = 612852475143;
    long largest = largest_prime_factor(n);

    print_number(largest);
    _putchar('\n');

    return (0);
}
