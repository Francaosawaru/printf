#include "main.h"

/**
 * get_function - handler selector for a specifier
 * @str: string
 * @id: element index after % symbol
 * This function is called from the _printf function after % is encountered
 * It will return NULL if the char after % is not a specifier and just print %
 * Return: a pointer to the function that handles the specifier, or NULL if
 * the char after % is not a specifier
 */
int (*get_function(const char *str, int id))(va_list)
{
/* fns is a struct array containing the specifier and its function */
prn fns[] = {
{"c", print_char}, {"d", print_number}, {" d", print_space_number},
{"+d", print_plus_number}, {"+ d", print_plus_number},
{"ld", print_long_number}, {"li", print_long_number},
{"hd", print_short_number}, {"hi", print_short_number},
{"lu", print_long_unsigned_dec}, {"hu", print_short_unsigned_dec},
{" +d", print_plus_number}, {"i", print_number},
{" i", print_space_number}, {"+i", print_plus_number},
{"+ i", print_plus_number}, {" +i", print_plus_number},
{"s", print_string}, {"%", print_percent}, {"b", print_binary},
{"o", print_octal}, {"u", print_unsigned_dec},
{"x", print_unsigned_hex}, {"X", print_unsigned_HEX_UPPER},
{"lX", print_long_unsigned_HEX_UPPER}, {"hX", print_short_unsigned_HEX_UPPER},
{"lx", print_long_unsigned_hex}, {"hx", print_short_unsigned_hex},
{"lo", print_long_octal}, {"ho", print_short_octal},
{"S", print_STRING_UPPER}, {"p", print_address}, {"#o", print_hash_octal},
{"#x", print_hash_hex}, {"#X", print_hash_HEX_UPPER}, {"r", print_reverse},
{"R", print_rot13}, {NULL, NULL}
};
int i = 0, j = 0;

if (str)
{
/* comparing each fns.c to the characters after % */
while (fns[i].func != NULL)
{
if (fns[i].c[j] == str[id])
{
if (fns[i].c[j + 1] == '\0')
{
return (fns[i].func);
}
else
{
i--;
j++;
id++;
}
}
i++;
}
}
/* return Null if the format is null or the next char is not a specifier */
return (NULL)
}
