#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints "All Numbers of Base 16" to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
