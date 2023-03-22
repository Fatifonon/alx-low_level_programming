#include "main.h"

/**
 * _isalpha - check if a char alphabet
 * @c: is the car to be cheched
 *
 * Return: 1 if char is lowercase or uppercase, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
