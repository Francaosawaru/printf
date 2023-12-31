#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct print - Struct op
 * @c: char or format specifier
 * @func: prints data with the specifier
 */
typedef struct print
{
	/* char *c: formats c, s, b, i, d, o, x, ... */
	char *c;
	/* collects the variable list data and prints with it */
	int (*func)(va_list);
} prn;

int _putchar(char c);
int _printf(const char *format, ...);
/* returns a function and flag number */
int (*get_func(const char *, int))(va_list);
int get_flags(const char *, int);
/* Conversion specifier function prototypes */
int print_long_unsigned_HEX(va_list);
int print_long_unsigned_dec(va_list);
int print_long_unsigned_hex(va_list);
int print_number(va_list);
int print_octal(va_list);
int print_percent(va_list);
int print_short_unsigned_hex(va_list);
int print_space_number(va_list);
int print_string(va_list);
int print_STRING(va_list);
int print_unsigned_HEX(va_list);
int print_unsigned_dec(va_list);
int print_unsigned_hex(va_list);
int print_address(va_list);
int print_binary(va_list);
int print_char(va_list);
int print_hash_HEX(va_list);
int print_hash_hex(va_list);
int print_hash_octal(va_list);
int print_HEX(long int, unsigned int, unsigned int);
int print_long_number(va_list);
int print_long_octal(va_list);
int print_plus_number(va_list);
int print_reverse(va_list);
int print_rot13(va_list);
int print_short_number(va_list);
int print_short_octal(va_list);
int print_short_unsigned_HEX(va_list);
int print_short_unsigned_dec(va_list);
/* b, c, d & i, o, %, p, r, R, s, S, u, x, X */
#endif
