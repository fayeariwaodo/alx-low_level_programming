#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer from which to get an absolute valute
 *
 * Retutn: void
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n + -1);
	}
	return (n);
}
