#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int result;

	result = add(2, 3);
	printf("%d + %d = %d\n", 2, 3, result);

	result = add(10, 20);
	printf("%d + %d = %d\n", 10, 20, result);

	return (0);
}
