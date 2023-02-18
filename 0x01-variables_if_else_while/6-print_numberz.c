#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: lowercase and uppercase
 *
 * Return: 0 to terminate the program
 */
int main(void)
{
	int chr;

	chr = 0;
	while(chr < 10)
	{
		putchar(chr + '0');
	}
	putchar('\n');
	return (0);
}
