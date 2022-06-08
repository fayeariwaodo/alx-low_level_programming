#include <stdio.h>

/**
 * main - Entry function
 * prints '_putchar 0 \n'
 * Return: Always 0
 */
int main(void)
{
char str[]= "Alx\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}

