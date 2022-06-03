#include <stdio.h>

/**
 *main - print the size of a bunch of a data types
 *Return: 0
 */
int main(void)
{
	char j;
	int j;
	long n;
	long long f;
	float m;

	printf("Size of a char: %lu byte(s)\n",(unsigned long) sizeof(t));
	printf("Size of an integer: %lu byte(s)\n",(unsigned long)sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(f));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(m));

	return (0);
}
