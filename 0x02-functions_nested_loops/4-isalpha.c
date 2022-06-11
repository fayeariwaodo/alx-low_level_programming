#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is an integer
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
		return (1);	
	return (0);
}
