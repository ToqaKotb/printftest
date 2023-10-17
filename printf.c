#include <stdarg.h>
#include "main.h"

/**
 * _printf - a func that work like printf
 * @format: string of charcters
 * Return: number of printed charcters in outbut
 */

int _printf(const char *format, ...)
{
	selct func[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percent},
	{"d", print_int},
	{"i", print_int},
	};

	va_list args;
	int printed_chars;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	printed_chars = selector(format, func, args);
	va_end(args);
	return (printed_chars);
}
/**
 * select - function to select func
 * @format: characters string
 * @func: structure with all possible functions
 * @args: arguments to print
 * Return: number of printed characters
 */

int select(const char *format, selct func[], va_list args)
{
	int a, b, printed_char, cnt;

	printed_char = 0;

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			for (b = 0; func[j].spc != NULL; b++)
			{
				if (format[a + 1] == func[b].spc[0])
				{
					cnt = func[b].f(args);
					if (cnt == -1)
						return (-1);
					printed_char += cnt;
					break;
				}
			}
			if (func[b].spc == NULL && format[a + 1] != ' ')
			{
				if (format[a + 1] != '\0')
				{
					_putchar(format[a]);
					_putchar(format[a + 1]);
					printed_char = printed_char + 2;
				}
				else
					return (-1);
			}
			a = a + 1;
		}
		else
		{
			_putchar(format[a]);
			printed_char++;
		}
	}
	return (printed_char);
}
