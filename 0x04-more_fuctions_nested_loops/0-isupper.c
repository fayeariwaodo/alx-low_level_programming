#include "main.h"
/**
 * _isupper -  checks for uppercase character
 * @c: given letter
 *
 * Return: Return 1 if c is uppercase, 0  otherwise
 */

char _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);

}
