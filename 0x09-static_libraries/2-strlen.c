#include "main.h"

/**
 * _strlen - return the length of a given string
 * @s: pointer to the string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
