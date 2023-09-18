#include "main.h"

/**
 * print_long_number - function that prints a long integer number
 * @args: arguments
 *
 * Return: count
 */

int print_long_number(va_list args)
{
	long int numb;
	unsigned long int numb_t, temp, i, div = 1, count = 0;

	numb = va_arg(args, long int);
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
 * print_short_number - function that prints a short integer using an array
 * @args: arguments
 *
 * Return: count
 */

int print_short_number(va_list args)
{
	short int numb;
	unsigned short int numb_t, temp, i, div = 1, count = 0;

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
