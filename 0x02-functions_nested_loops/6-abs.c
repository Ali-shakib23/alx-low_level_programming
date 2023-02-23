#include "main.h"
/**
 * _abs - computes the absolute
 *
 * @n: number as integer
 *
 * Return: 0 to terminate the program
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
