#include "main.h"
/**
 * print_most_numbers - print from 0 10 9 except 2 and 4
 *
 * Return: nothing since it is void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <=9; i++)
	{
		if (i == 2 || i ==3)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}