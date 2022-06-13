#include "main.h"

/**
 * _puts - print given strings
 * @str: string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
