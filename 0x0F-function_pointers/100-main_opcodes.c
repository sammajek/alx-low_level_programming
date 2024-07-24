#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, exits with status 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *main_addr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_addr[i] & 0xFF);
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
