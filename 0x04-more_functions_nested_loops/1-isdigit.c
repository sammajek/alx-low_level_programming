#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: Tests the _isdigit function with various inputs
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c1 = '5';
	char c2 = 'a';

	printf("%c is a digit: %d\n", c1, _isdigit(c1)); /* Print: 5 is a digit: 1 */
	printf("%c is a digit: %d\n", c2, _isdigit(c2)); /* Print: a is a digit: 0 */

	return (0);
}
