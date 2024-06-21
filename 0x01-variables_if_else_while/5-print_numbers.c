#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints "All Single Digits Numbers" to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');

	return (0);
}

