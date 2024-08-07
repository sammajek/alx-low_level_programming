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
	unsigned int i = 0, j = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);

				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", sep, str);
				break;
			default:
			j = 1;
			break;
		}
		if (!j)
			sep = ", ";
		i++;
		j = 0;
	}

	va_end(args);
	printf("\n");
}
