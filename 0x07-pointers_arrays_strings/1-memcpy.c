#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the memory area
 * @src: the memory where is copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	int a = n;

	for (; i < a; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
