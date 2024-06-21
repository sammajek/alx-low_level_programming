#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints "Prints Single Digit Numbers" to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
	}
	putchar('\n');

	return (0);
}

