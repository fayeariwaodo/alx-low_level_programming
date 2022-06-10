#include "main.h"

/**
 * _isupper -checks for uppercase character
 * @c: The character to be checked
 *
 * Return: Return 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
