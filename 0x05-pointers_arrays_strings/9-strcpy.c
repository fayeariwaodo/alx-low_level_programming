#include "main.h"


/**
 * _strcpy - copiies the string pointed to by src
 * @dest: copy string
 * @src: copy string pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
