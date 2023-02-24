#include "main.h"
/**
 * _isdigit - check if digit
 *
 * @c: integer parameter
 *
 * Return: 0 to terminate the program
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
