Printf project collaboration between Samuel Ayanwole and Franca Osawaru,students of ALX Software Engeenring Cohort18.In this project a function named "printf" is created to perform the same funtion as that of the prinf in the stdio.h libary.

This printf project contains the following files:

main.h

_putchar

_printf

utilis.c

handle_print.c

functions.c

funtions1.c

funtions2.c

write_handles.c

get_flags.c

get_precision.c

get_size.c

get_width.c

main.c

prototypes;

int print_hexa_upper(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[],char buffer[], int flags, char flag_ch,int width,int precision,int size);
int print_non_printable(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],int flags, int width, int precision,int size);
int print_octal(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],int flags, int width, int precision, int size);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int print_pointer(va_list types, char buffer[],int print_reverse(va_list types, char buffer[],int print_reverse(va_list types, char buffer[],int flags, int width, int precision, int size);
int flags, int width, int precision, int size);
int flags, int width, int precision, int size);
int print_rot13string(va_list types, char buffer[],int flags, int width, int precision, int size);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

files funtions:
Function to print string in reverse

Function to print non printable characters

Funtions to print chars and strings

Funcion to print memory address

Functions to print numbers

Funciotns to handle other specifiers

Collaborators:
Samuel Ayanwole and Franca Osawaru

