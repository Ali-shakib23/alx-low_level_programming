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
	int ch1 = 97;
	int ch2 = 65;

	while (ch1 <= 'z')
	{
		putchar(ch1);
		ch1++;
	}
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
