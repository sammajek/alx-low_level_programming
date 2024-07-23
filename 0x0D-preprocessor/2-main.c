#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of the file it was compiled
 * from, followed by a new line.
 *
 * Return: Always returns 0 to indicate success.
 */

int main(void)
{
	const char *filename = __FILE__;

	while (*filename)
	{
		write(1, filename, 1);
		filename++;
	}
	write(1, "\n", 1);
	return (0);
}
