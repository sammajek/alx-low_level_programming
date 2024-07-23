#include "main.h"

/**
 * main - tests the _isdigit function
 * Return: 0
 */
int main(void)
{
	char test_char = '5';
	if (_isdigit(test_char))
	{	
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
	return (0);
}
