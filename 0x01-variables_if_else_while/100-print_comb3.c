#include <stdio.h>

/**
 * main - prints all possible different combinations of tow digits
 * Return: Always 0 (success)
*/
int main(void)
{
	int n, m;

	for (n = 45; n <= 47; n++)
	{
		for (m = 46; m <= 48; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 47 || m != 48)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
