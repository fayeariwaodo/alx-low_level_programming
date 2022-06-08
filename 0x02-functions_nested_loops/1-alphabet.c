#include <stdio.h>
/**
 * print_alphabet - Entry point
 * Prints a function that prints the lowercase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
