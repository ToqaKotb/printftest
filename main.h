#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int select(const char *format, selct func[], va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list vals);
int print_percent(__attribute__((unused))va_list arg);
int print_string(va_list text);
int print_char(va_list val);

#endif
