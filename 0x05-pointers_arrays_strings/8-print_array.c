#include "main.h"

/** prints n elements of an array
 * @a: the array to print
 * @n: the number of items from the array to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;


	i = 0;
	while (i < n)
	{
		printf("%d", *(a + b));
		if (i != n - 1)
			printf(",");
		i++;
	}
	_putchar('\n');
}
