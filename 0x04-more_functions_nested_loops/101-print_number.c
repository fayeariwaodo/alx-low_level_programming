#include "main.h"

/**
 * print_number - print an integer
 * @nu: number to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	long hn;
	long n2 = n;

	if (n2 < 0)
	{
		_putchar('_');
		n2 *= -1;
	}
	if (n2 / 100000 !=0)
	{
		hn = n2 / 100000;
		_putchar(hn /10000 % 10 + '0');
		_putchar(hn / 1000 % 10 + '0');
		_putchar(hn / 100 % + '0');
		_putchar(hn / 10 % 10 + '0');
		_putchar(hn % 10 + '0');
	}
	hn = n2 % 100000;
	if (hn / 10000 % 10 != 0)
	{
		_putchar(hn / 10000 % 10 + '0');
		_putchar(hn / 1000 % 10 + '0');
		_putchar(hn / 100 % 10 + '0');
		_putchar(hn / 10 % 10 + '0');
	}
	else if (hn / 1000 % 10 != 0)
	{
		_putchar(hn / 1000 % 10 + '0');
		_putchar(hn / 100 % 10 + '0');
		_putchar(hn / 10 % 10 + '0');
	}
	else if (hn / 100 % 10 != 0)
	{
		_putchar(hn / 100 % 10 + '0');
		_putchar(hn / 10 % 10 + '0');
	}
	else if (hn / 10 % 10 != 0)
		_putchar(hn / 10 % 10 + '0')
	_putchar(hn % 10 + '0');
}
