#include "main.h"

/**
 * print_char - to print a charavter
 * @val: argument to print as printf
 * Return: number of printed charcters
 */

int print_char(va_list val)
{
	char d;

	d = va_arg(val, int);
	_putchar(d);
	return (1);
}

/**
 * print_string - to print string
 * @val: argument to printf
 * Return: number of printed charcters
 */

int printf_string(va_list val)
{
	char *d;
	int a, len;

	d = va_arg(val, char *);
	if (d == NULL)
	{
		d = "(null)";
		len = _strlen(d);
		for (a = 0; a < len; a++)
			_putchar(d[a]);
		return (len);
	}
	else
	{
		len = _strlen(d);
		for (a = 0; a < len; a++)
			_putchar(d[a]);
		return (len);
	}
}

/**
 * printf_37 - prints the percentage at num 37
 * Return: one when success
 */

int printf_37(void)
{
	_putchar(37);
	return (1);
}
