#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: lowercase in reverse
 *
 * Return: 0 to terminate the program
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
