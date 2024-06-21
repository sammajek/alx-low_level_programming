#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints "All lower cases in reverse" to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
		putchar('\n');

	return (0);
}
