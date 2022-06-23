#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: points to string parameter
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
