#include "main.h"


/**
 * strncpy - copy two strings
 * @dest: points to char parameter
 * @src: points to the source of the char parameter
 * @n: integer
 * Return: *dest
 */

char *strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; src[i]!= '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
