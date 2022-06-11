#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 * @a: an integer to add to b
 * @b: an integer to add to a
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int b = 0;

	while (b < 10)
	{
		char a = 'a';

		while (a <= 'z')

		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
