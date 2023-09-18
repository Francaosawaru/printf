#include "main.h"

/**
 * print_octal - function that prints a number in octal notation
 * @args: arguments
 *
 * Return: count
 */

int print_octal(va_list args)
{
	unsigned int i, numb, oct[100];
	int k;

	numb = va_arg(args, unsigned int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}


	for (i = 0; numb != 0; i++)
	{
		oct[i] = numb % 8;
		numb /= 8;
	}

	for (k = i - 1; k >= 0; k--)
		_putchar(oct[k] + '0');

	return (i);
}

/**
 * print_long_octal - function that prints a number in octal notation
 * @args: arguments
 *
 * Return: count
 */

int print_long_octal(va_list args)
{
	unsigned long int i, numb, oct[100];
	long int k;

	numb = va_arg(args, unsigned long int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; numb != 0; i++)
	{
		oct[i] = numb % 8;
		numb /= 8;
	}

	for (k = i - 1; k >= 0; k--)
		_putchar(oct[k] + '0');

	return (i);
}

/**
 * print_short_octal - function that prints a number in octal notation
 * @args: arguments
 *
 * Return: count
 */

int print_short_octal(va_list args)
{
	unsigned short int i, numb, oct[100];
	short int k;

	numb = va_arg(args, unsigned int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; numb != 0; i++)
	{
		oct[i] = numb % 8;
		numb /= 8;
	}

	for (k = i - 1; k >= 0; k--)
		_putchar(oct[k] + '0');

	return (i);
}

/**
 * print_hash_octal - function that prints a number in octal notation
 * @args: arguments
 *
 * Return: count
 */

int print_hash_octal(va_list args)
{
	unsigned int i, numb, oct[100];
	int k;

	numb = va_arg(args, unsigned int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	_putchar('0');

	for (i = 0; numb != 0; i++)
	{
		oct[i] = numb % 8;
		numb /= 8;
	}
	for (k = i - 1; k >= 0; k--)
		_putchar(oct[k] + '0');

	return (i + 1);
}
