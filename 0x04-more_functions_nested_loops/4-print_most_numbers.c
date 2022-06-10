#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 except 4 and 2
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
