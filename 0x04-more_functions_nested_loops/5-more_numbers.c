#include "main.h"
/**
 * more_numbers - print from 0 t0 14 10 times
 *
 * Return: no return since it's void
 */
void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
