#include "main.h"

/**
 * print_string - prints a string using a loop and also counts
 * the characters
 * @args: arguments
 *
 * Return: count
 */

int print_string(va_list args)
{
	int r;
	char *str;
	char null[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (r = 0; null[r] != '\0'; r++)
			_putchar(null[r]);
		return (6);
	}

	for (r = 0; str[r] != '\0'; r++)
	{
		_putchar(str[r]);
	}
	return (r);
}
