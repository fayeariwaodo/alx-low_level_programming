#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * Return: void
 */
void print_line(int n)
{
	int c = 0;

	while (c < n)
	{
		if (n > 0)
			_putchar('_');
		c++;
	}
	_putchar('\n');
}
