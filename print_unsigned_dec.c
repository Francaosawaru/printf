#include "main.h"

/**
 * print_unsigned_dec - function that prints an unsigned integer
 * @args: arguments
 *
 * Return: count
 */

int print_unsigned_dec(va_list args)
{
	unsigned int arr[100], j = 0, r, count = 0;
	int k;
	unsigned int numb;

	numb = va_arg(args, unsigned int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	while (numb != 0)
	{
		r = numb % 10;
		arr[j] = r;
		j++;

		numb /= 10;
	}

	for (k = j - 1; k > -1; k--, count++)
		_putchar(arr[k] + '0');

	return (count);
}

/**
 * print_long_unsigned_dec - function that prints an unsigned long integer
 * @args: arguments
 *
 * Return: count
 */

int print_long_unsigned_dec(va_list args)
{
	unsigned long int arr[100], j = 0, r, count = 0;
	long int k;
	unsigned long int numb;

	numb = va_arg(args, unsigned long int);
	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	while (numb != 0)
	{
		r = numb % 10;
		arr[j] = r;
		j++;

		numb /= 10;
	}
	for (k = j - 1; k > -1; k--, count++)
		_putchar(arr[k] + '0');

	return (count);
}

/**
 * print_short_unsigned_dec - function that prints an unsigned long integer
 * @args: arguments
 *
 * Return: count
 */

int print_short_unsigned_dec(va_list args)
{
	unsigned short int arr[100], j = 0, r, count = 0;
	short int k;
	unsigned short int numb;

	numb = va_arg(args, unsigned int);
	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	while (numb != 0)
	{
		r = numb % 10;
		arr[j] = r;
		j++;

		numb /= 10;
	}

	for (k = j - 1; k > -1; k--, count++)
		_putchar(arr[k] + '0');

	return (count);
}
