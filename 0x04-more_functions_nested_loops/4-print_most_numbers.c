#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9, followed by a new line,
 *                      except 2 and 4
 */
void print_most_numbers(void)
{
	char numbers[] = "01356789\n";
	char *ptr = numbers;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
}
