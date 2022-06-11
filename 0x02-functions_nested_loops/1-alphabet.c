#include "main.h"
/**
 * print_alphabet - Entry point
 * Prints a function that prints the lowercase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
