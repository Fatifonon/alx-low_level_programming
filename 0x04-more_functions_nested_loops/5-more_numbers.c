#include "main.h"

/**
 * more_numbers - print more numbers
 *
 */
void more_numbers(void)
{
	char n; m

	for (n = '1'; n <= 10; n++)
	{
		for (m = '0'; m <= 14; m++)
		{
			if (m >= 10)
				_putchar('1');
			_putchar (m % 10 + '0');
		}
		_putchar('\n');
	}
}
