#include "main.h"



/**
 * _pow_recursion - returns the value of x raised to the p[ower of y
 * @x: int parameter
 * @y: integer paramtr
 * Return: x
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
