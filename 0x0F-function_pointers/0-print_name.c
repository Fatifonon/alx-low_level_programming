#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void(*f)(char*))
{
	if (name == NULL|| f == NULL)
		return;
	f(name);
}
