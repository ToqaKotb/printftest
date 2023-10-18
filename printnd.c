#include "main.h"

/**
 * print_int - to print an integer
 * @vals: argument to printf
 * Return: number of digits printed
 */

int printf_int(va_list vals)
{
	int m = va_arg(vals, int);
	int num, last = m % 10, digit, exp = 1;
	int  a = 1;

	m = m / 10;
	num = m;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		m = -m;
		last = -last;
		a++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = m;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			a++;
		}
	}
	_putchar(last + '0');

	return (a);
}

/**
 * printf_dec - prints decimal in output
 * @val: arguments
 * Return: number of characters printed 1
 */

int printf_dec(va_list val)
{
	int m = va_arg(val, int);
	int num, last = m % 10, digit, exp = 1;
	int  a = 1;
	
	m = m / 10;
	num = m;
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		m = -m;
		last = -last;
		a++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = a;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			a++;
		}
	}
	_putchar(last + '0');

	return (a);
}
