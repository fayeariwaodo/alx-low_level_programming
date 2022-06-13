#include "main.h"

/**
 * _puts - print given strings
 * @faye: string to print
 *
 * Return: 0
 */

void _puts(char *faye)
{
	int i;

	while (*(faye + i) != '\0')
	{
		_putchar(*(faye + i));
		i++;
	}
	_putchar('\n');
}
