#include "main.h"

/**
 * swap_int - swap the value of two int using pointer
 * @a: first pointer to swap
 * @b: second pointer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
