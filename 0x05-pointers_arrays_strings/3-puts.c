#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	i = 0

	while (*str[i] != '\0')
	{
		_putchar(*str[i]);
		i++;
	}

		_putchar('\n');
}
