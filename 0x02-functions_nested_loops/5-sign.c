#include "main.h"
/**
 * print_sign - check if +ve , -ve or zero
 *
 * @n: number as integer
 *
 * Return: 0 to terminate the program
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
