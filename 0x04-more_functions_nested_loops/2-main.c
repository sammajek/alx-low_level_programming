#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * main - tests the mul function
 * Return: 0
 */
int main(void)
{
	int result;

	result = mul(3, 5);
	print_number(result);
	_putchar('\n');

	result = mul(-2, 4);
	print_number(result);
	_putchar('\n');

	result = mul(0, 10);
	print_number(result);
	_putchar('\n');

	return (0);
}
