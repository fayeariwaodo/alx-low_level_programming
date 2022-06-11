#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @r: last digit result
 *
 * Return: void
 */

int print_last_digit(int r)
{
	int n;

	n = (r % 10);
	if (n < 0)
	{
	n = (-1 * n);
	}

	_putchar(n + '0');
	return (n);
}
