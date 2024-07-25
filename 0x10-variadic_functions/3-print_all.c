#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format provided
 * @format: A list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 1;
		while (j)
		{
			if (format[i] == 'c')
			{
			printf("%s%c", separator, va_arg(args, int));
				j = 0;
			}
			else if (format[i] == 'i')
			{
				printf("%s%d", separator, va_arg(args, int));
				j = 0;
			}
			else if (format[i] == 'f')
			{
				printf("%s%f", separator, va_arg(args, double));
				j = 0;
			}
			else if (format[i] == 's')
			{
			str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				j = 0;
			}
			if (j == 0)
				separator = ", ";
			i++;
		}
	}

	va_end(args);
	printf("\n");
}
