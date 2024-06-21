#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints "Alphabets in Lowercases" to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}

