#include "main.h"
/**
* print_HEX_UPPER - prints a hexadecimal number
* @num: decimal to convert
* @size: the array size
* @type: letter case indicator wether lowercase letters or uppercase
* Return: Nothing
*/
int print_HEX_UPPER(long int num, unsigned int size, unsigned int type)
{
unsigned int p, i;
int *hex;
int r;
char c;
/* Type 0 for lowercase, else upper */
if (type == 0)
c = 'a';
else
c = 'A';
if (num < 0)
num = num * -1;
hex = malloc(sizeof(int) * size);
for (i = 0; i < size; i++)
hex[i] = 0;
for (p = 0; p < size && num != 0; p++)
{
hex[p] = num % 16;
num /= 16;
}
/* Prints the hex array */
for (r = p - 1; r >= 0; r--)
{
if (type != 0)
_putchar('0');
if (hex[r] < 10)
_putchar(hex[r] + '0');
else
_putchar((hex[r] % 10) + c);
}
free(hex);
return (p);
}
