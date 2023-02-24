#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints positve, negative or zero
 *
 * Return: Description of the returned value
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < 2; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
