#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer from which to get an absolute valute
 *
 * Return: void
 */
int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
