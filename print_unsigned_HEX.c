#include "main.h"

/**
 * print_unsigned_HEX - function that prints an unsigned hexadecimal
 * @args: arguments
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and putting the remainder as 0-9 or A-F
 *
 * Return: count
 */

int print_unsigned_HEX(va_list args)
{
	unsigned int i, numb, hex[100];
	int k;

	numb = va_arg(args, unsigned int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; numb != 0; i++)
	{
		hex[i] = numb % 16;
		numb /= 16;
	}

	for (k = i - 1; k >= 0; k--)
	{
		if (hex[k] < 10)
		{
			_putchar(hex[k] + '0');
		}
		else
		{
			_putchar((hex[k] % 10) + 'A');
		}
	}

	return (i);
}

/**
 * print_long_unsigned_HEX - function that prints an unsigned hexadecimal
 * @args: arguments
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and putting the remainder as 0-9 or A-F
 *
 * Return: count
 */

int print_long_unsigned_HEX(va_list args)
{
	unsigned long int i, numb, hex[100];
	int k;

	numb = va_arg(args, unsigned long int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; numb != 0; i++)
	{
		hex[i] = numb % 16;
		numb /= 16;
	}

	for (k = i - 1; k >= 0; k--)
	{
		if (hex[k] < 10)
		{
			_putchar(hex[k] + '0');
		}
		else
		{
			_putchar((hex[k] % 10) + 'A');
		}
	}

	return (i);
}

/**
 * print_short_unsigned_HEX - function that prints an unsigned hexadecimal
 * @args: arguments
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and putting the remainder as 0-9 or A-F
 *
 * Return: count
 */

int print_short_unsigned_HEX(va_list args)
{
	unsigned short int i, numb, hex[100];
	int k;

	numb = va_arg(args, unsigned int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; numb != 0; i++)
	{
		hex[i] = numb % 16;
		numb /= 16;
	}

	for (k = i - 1; k >= 0; k--)
	{
		if (hex[k] < 10)
		{
			_putchar(hex[k] + '0');
		}
		else
		{
			_putchar((hex[k] % 10) + 'A');
		}
	}

	return (i);
}

/**
 * print_hash_HEX - function that prints an unsigned hexadecimal with the 0X
 * @args: arguments
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and putting the remainder as 0-9 or A-F
 *
 * Return: count
 */

int print_hash_HEX(va_list args)
{
	unsigned int i, numb, hex[100];
	int k;

	numb = va_arg(args, unsigned int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; numb != 0; i++)
	{
		hex[i] = numb % 16;
		numb /= 16;
	}

	_putchar('0');
	_putchar('X');

	for (k = i - 1; k >= 0; k--)
	{
		if (hex[k] < 10)
		{
			_putchar(hex[k] + '0');
		}
		else
		{
			_putchar((hex[k] % 10) + 'A');
		}
	}

	return (i + 2);
}
