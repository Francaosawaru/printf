#include "main.h"

/**
 * print_reverse - prints a string in reverse and also counts the characters
 * @args: arguments
 *
 * Return: count
 */
int print_reverse(va_list args)
{
	int j, k;
	char *str;
	char null[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (j = 0; null[j] != '\0'; j++)
			_putchar(null[j]);
		return (6);
	}

	for (j = 0; str[j] != '\0'; j++)
		;
	for (k = j - 1; k >= 0; k--)
		_putchar(str[k]);

	return (j);
}
