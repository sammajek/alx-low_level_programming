#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 */
void print_numbers(void)
{
	char numbers[] = "0123456789\n";
	int i;

	for (i = 0; i < 11; i++)
	{
		_putchar(numbers[i]);
	}
}
