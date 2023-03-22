#include "main.h"

/**
 * print_sign - print the sing of a num
 * @n: the num to be checked for
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints - if n is zero
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putcher('-');
		return (-1);
	}
}
