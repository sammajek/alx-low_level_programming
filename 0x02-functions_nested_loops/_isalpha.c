#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	printf("%c: %d\n", c, _isalpha(c));

	c = 'A';
    	printf("%c: %d\n", c, _isalpha(c));

	c = '1';
	printf("%c: %d\n", c, _isalpha(c));

	c = '@';
	printf("%c: %d\n", c, _isalpha(c));

	return (0);
}
