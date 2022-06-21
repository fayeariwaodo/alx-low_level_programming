#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 * @s: points to char
 * @c: where to find char parameter
 * Return: *S
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		
