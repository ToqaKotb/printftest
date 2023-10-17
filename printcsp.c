#include "main.h"

/**
 * print_char - to print a charavter
 * @val: argument to print as printf
 * Return: number of printed charcters
 */

int print_char(va_list val)
{
	_putchar(va_arg(val, int));
	return (1);
}
/**
 * print_string - to print string
 * @text: argument to printf
 * Return: number of printed charcters
 */
int print_string(va_list text)
{
	int a;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	return (a);
}

/**
 * print_percent - Prints a percent sign
 * @arg: args
 * Return: one
 */

int print_percent(__attribute__((unused))va_list arg)
{
	_putchar('%');
	return (1);
}

/**
 * print_int - to print an integer
 * @vals: argument to printf
 * Return: number of digits printed
 */
int print_int(va_list vals)
{
	int m;
	int dividor;
	int a;
	unsigned int num;

	a  = va_arg(vals, int);
	dividor = 1;
	l = 0;

	if (m < 0)
	{
		l += _putchar('-');
		num = m * -1;
	}
	else
		num = m;

	for (; num / dividor > 9; )
		dividor *= 10;

	for (; dividor != 0; )
	{
		l += _putchar('0' + num / dividor);
		num %= dividor;
		dividor /= 10;
	}
	return (l);
}
