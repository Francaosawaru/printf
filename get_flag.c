#include "main.h"
/**
 * get_flags - gets number of flags encountered in the function
 * @str: string (format)
 * @id: index character after %
 * Return: 0 or number of flags and specifier
 */
int get_flags(const char *str, int id)
{
prn fns[] = {
{"c", print_char}, {"d", print_number}, {" d", print_space_number},
{"+d", print_plus_number}, {"+ d", print_plus_number},
{"ld", print_long_number}, {"li", print_long_number},
{"hd", print_short_number}, {"hi", print_short_number},
{"lu", print_long_unsigned_dec}, {"hu", print_short_unsigned_dec},
{" +d", print_plus_number}, {"i", print_number}, {"#X", print_hash_HEX_UPPER},
{" i", print_space_number}, {"+i", print_plus_number},
{"+ i", print_plus_number}, {" +i", print_plus_number},
{"s", print_string}, {"%", print_percent}, {"b", print_binary},
{"o", print_octal}, {"u", print_unsigned_dec}, {"R", print_rot13},
{"x", print_unsigned_hex}, {"X", print_unsigned_HEX_UPPER},
{"lX", print_long_unsigned_HEX_UPPER}, {"hX", print_short_unsigned_HEX_UPPER},
{"lx", print_long_unsigned_hex}, {"hx", print_short_unsigned_hex},
{"lo", print_long_octal}, {"ho", print_short_octal},
{"S", print_STRING_UPPER}, {"p", print_address}, {"#o", print_hash_octal},
{"#x", print_hash_hex}, {"r", print_reverse}, {NULL, NULL}
};
int i = 0, j = 0;
/* counts the flags and returns the number, + c will return 3 */
if (str)
{
while (fns[i].func != NULL)
{
if (fns[i].c[j] == str[id])
{
if (fns[i].c[j + 1] == '\0')
{
return (j + 1);
}
else
{
i--;
j++;
id++;
}
} i++;
}
}
return (0);
}
