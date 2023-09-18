#include "main.h"
/**
* _putchar - function that write char c to stdout
* @c: printed char
* Return: 1 on success
* On error, returned -1.
*/
int _putchar(char c)
{
        return (write(1, &c, 1));
}
