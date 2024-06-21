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
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');  /* Convert digit to ASCII code and print */
		putchar('\n');     /* Print newline character */
	}
	return (0);
}
