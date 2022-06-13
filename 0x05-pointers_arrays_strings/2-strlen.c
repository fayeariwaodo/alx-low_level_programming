#include "main.h"

/**
 * _strlen - return the length of a given string
 * @s: pointer to the string
 *
 * Return: void
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
