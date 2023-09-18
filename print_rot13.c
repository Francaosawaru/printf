#include "main.h"

/**
 * print_rot13 - function that prints a rot13'd string, non letters
 * are left as it is
 * @args: arguments
 *
 * Return: count(i)
 */

int print_rot13(va_list args)
{
	int j, n;
	char *str;
	char org[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *rot13;

	str = va_arg(args, char *);
	rot13 = malloc(sizeof(char) * (strlen(str) + 1));
	if (rot13 == NULL)
	{
		return (0);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		if ((str[j] >= 65 && str[j] <= 90) || (str[j] >= 97 && str[j] <= 122))
		{
			for (n = 0; org[n] != '\0'; n++)
			{
				if (str[j] == org[n])
				{
					rot13[j] = rot[n];
					break;
				}
			}
		}
		else
		{
			rot13[j] = str[j];
		}
	}
	rot13[j] = '\0';

	for (j = 0; rot13[j] != '\0'; j++)
	{
		_putchar(rot13[j]);
	}

	free(rot13);
	return (j);
}
