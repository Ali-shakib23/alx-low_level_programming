#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase
 *
 * Return: 0 terminate the program
 */

int main(void)
{
	for (int ch = 97  ; ch <= 'z' ; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
