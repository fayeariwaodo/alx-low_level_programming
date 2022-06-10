#include "main.h"

/**
 * print_diagonal - prints n number of n '\'s
 * @n: number of '\'s to print
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int c, s;

	c = 0;
	if (n > 0)
	{
		while (c < n)
		{
			s = 0;
				while (s < c)
				{
					_putchar(' ');
					s++;
				}
			_putchar('\\');
			_putchar('\n');
			c++;
		}
	}
}
