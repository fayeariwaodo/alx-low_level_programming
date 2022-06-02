#include <stdio.h>

/**
 * main - prints the size of a bunch of a data types
 * Return 0
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("size of an int: %lu byte(s)"\n, sizeof(ainteger));
	printf("size of a long int: %lu byte(s)"\n, sizeof(along));
	printtf("size of a long long int: %lu byte(s)\n", sizeof(alonglong));
	printf("size of a float: %lu byte(s)\n", sizeof(afloat));
	
	return (0);
}
