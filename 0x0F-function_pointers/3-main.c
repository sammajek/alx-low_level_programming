#include "3-calc.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, exits with status 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
	write(2, "Error\n", 6);
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		write(2, "Error\n", 6);
		exit(99);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
