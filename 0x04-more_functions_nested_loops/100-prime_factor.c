#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
    long num = 612852475143;
    long divisor = 2;
    long largest = 0;

    while (num != 1)
    {
        if (num % divisor == 0)
        {
            num /= divisor;
            largest = divisor;
        }
        else
        {
            divisor++;
        }
    }

    print_number(largest);
    _putchar('\n');

    return (0);
}
