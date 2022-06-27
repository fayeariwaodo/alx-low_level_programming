#include "main.h"

/**
 * _memcpy - copies n bytes from memory area source to memory area destination
 * @dest: points to char parameter
 * @src: points to char parameter
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
