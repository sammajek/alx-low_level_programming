#include "function_pointers.h"

/**
 * print_char_by_char - Prints a string character by character using _putchar
 * @str: The string to be printed
 */
void print_char_by_char(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}

int main(void)
{
	char name[] = "John Doe";
	print_name(name, print_char_by_char);
	return 0;
}
