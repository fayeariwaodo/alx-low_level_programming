#include "main.h"

/**
 * _strcmp -compares two strings
 * @s1 : points to char parameter
 * @s2: points to char parameter
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int R;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
}

