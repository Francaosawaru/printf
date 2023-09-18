#include "main.h"

/**
 * print_char - function that prints a single character
 * @args: arguments
 *
 * Return: 1, the number of character printed
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}
