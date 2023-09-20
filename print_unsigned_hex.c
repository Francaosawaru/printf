#include "main.h"

/**
 * print_unsigned_hex - function that prints an unsigned hexadecimal
 * @args: arguments
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and putting the remainder as 0-9 or a-f
 *
 * Return: count of numbers printed
 */
int print_unsigned_hex(va_list args)
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
_putchar((hex[k] % 10) + 'a');
}
}
return (i);
}

/**
 * print_hash_hex - prints an unsigned hexadecimal with preceeding 0x
 * @args: arguments
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and putting the remainder as 0-9 or a-f
 *
 * Return: count of numbers printed
 */

int print_hash_hex(va_list args)
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
_putchar('x');
for (k = i - 1; k >= 0; k--)
{
if (hex[k] < 10)
{
_putchar(hex[k] + '0');
}
else
{
_putchar((hex[k] % 10) + 'a');
}
}
return (i + 2);
}
/**
 * print_long_unsigned_hex - function that prints an unsigned hexadecimal
 * @args: arguments
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and putting the remainder as 0-9 or a-f
 *
 * Return: count of numbers printed
 */
int print_long_unsigned_hex(va_list args)
{
unsigned long int i, numb, hex[100];
long int k;
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
_putchar((hex[k] % 10) + 'a');
}
}
return (i);
}

/**
 * print_short_unsigned_hex - function that prints an unsigned hexadecimal
 * @args: arguments
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and putting the remainder as 0-9 or a-f
 *
 * Return: count of numbers printed
 */

int print_short_unsigned_hex(va_list args)
{
unsigned short int i, numb, hex[100];
short int k;
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
_putchar((hex[k] % 10) + 'a');
}
}
return (i);
}
