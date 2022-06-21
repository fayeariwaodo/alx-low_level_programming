#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence
 * @s: points to char
 * @c: where to find char parameter
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
