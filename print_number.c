#include "main.h"

/**
 * print_number - function that prints an integer number using an array
 * @args: arguments
 *
 * Return: count
 */

int print_number(va_list args)
{
	int numb;
	unsigned int numb_t, temp, i, div = 1, count = 0;

	numb = va_arg(args, int);
	if (numb < 0)
	{
		numb_t = numb * -1;
		_putchar('-');
		count++;
	}
	else
	{
		numb_t = numb;
	}

	temp = numb_t;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++, count++)
	{
		_putchar(((numb_t / div) % 10) + '0');
	}
	return (count);
}

/**
 * print_plus_number - function that prints an integer using an array
 * @args: arguments
 *
 * Return: count
 */

int print_plus_number(va_list args)
{
	int numb;
	unsigned int numb_t, temp, i, div = 1, count = 0;

	numb = va_arg(args, int);
	if (numb < 0)
	{
		numb_t = numb * -1;
		_putchar('-');
		count++;
	}
	else
	{
		numb_t = numb;
	}

	temp = numb_t;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}

	if (count == 0)
	{
		_putchar('+');
		count++;
	}
	for (i = 0; div > 0; div /= 10, i++, count++)
	{
		_putchar(((numb_t / div) % 10) + '0');
	}
	return (count);
}

/**
 * print_space_number - function that prints an integer using an array
 * @args: arguments
 *
 * Return: count
 */
int print_space_number(va_list args)
{
	int numb;
	unsigned int numb_t, temp, i, div = 1, count = 0;

	numb = va_arg(args, int);

	if (numb < 0)
	{
		numb_t = numb * -1;
		_putchar('-');
		count++;
	}
	else
	{
		numb_t = numb;
	}

	temp = numb_t;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	if (count == 0)
	{
		_putchar(' ');
		count++;
	}

	for (i = 0; div > 0; div /= 10, i++, count++)
	{
		_putchar(((numb_t / div) % 10) + '0');
	}
	return (count);
}
