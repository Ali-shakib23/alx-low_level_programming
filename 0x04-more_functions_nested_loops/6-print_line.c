#include "main.h"
/**
 * print_line - print straight line
 *
 * @n: number as size of the line
 *
 * Return: no return since void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
