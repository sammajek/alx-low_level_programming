#include "main.h"
/**
 * main - Entry point
 *
 * Description: Tests the _isdigit function with various inputs
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int result;

	result = _isdigit('5');
	if (result == 1)
	{
		_putchar('5');
		_putchar(':');
		_putchar(' ');
		_putchar('1');
		_putchar('\n');
	}
	else
	{
		_putchar('5');
		_putchar(':');
		_putchar(' ');
		_putchar('0');
		_putchar('\n');
	}

	result = _isdigit('a');
	if (result == 1)
	{
		_putchar('a');
		_putchar(':');
		_putchar(' ');
		_putchar('1');
		_putchar('\n');
	}
	else
	{
		_putchar('a');
		_putchar(':');
		_putchar('0');
		_putchar('\n');
	}

	return (0);
}
