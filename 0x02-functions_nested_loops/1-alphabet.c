#include "main.h"
/**
 * print_alphabet - print alphabet lowercase
 *
 * Description: print in lower case
 *
 * Return: 0 to terminate the program
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
