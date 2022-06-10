#include"main.h"

/**
 *  print_square - prints a square, followed by a new line.
 *  @size: Size of square sides
 *
 *  Return: Nothing
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		y = 0;
		while (x < size)
		{
			x = 0;
			while (x < size)
			{
				_putchar('#');
				x++;
			}
			_putchar('\n');
			y++;
		}
	}
		else
			_putchar('\n');
}
