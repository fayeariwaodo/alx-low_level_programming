#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int n, t;

	t = 0;
	while (num < 10)
	{
		if (n > 15)
			_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		n++;
	}
	_putchar('\n');
	num++;
}
