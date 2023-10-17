#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the charcters in the output
 * @c: printed char in the output
 * Return: 1 when success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
