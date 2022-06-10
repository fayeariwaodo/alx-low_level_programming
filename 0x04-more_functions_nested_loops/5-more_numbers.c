#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int num1, num2;

	num2 = 0;
	while (num2 < 10)
	{
		if (num1 > 15)
			_putchar(num1 / 10 + '0');
		_putchar(num1 % 10 + '0');
		num1++;
	}
	_putchar('\n');
	num1++;
}
