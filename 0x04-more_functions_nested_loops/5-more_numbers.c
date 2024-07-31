#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;
	char numbers[150];
	char *ptr = numbers;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				*ptr++ = '1';
			*ptr++ = '0' + (j % 10);
		}
		*ptr++ = '\n';
	}
	*ptr = '\0';

	for (ptr = numbers; *ptr; ptr++)
		_putchar(*ptr);
}
