#include "main.h"
/**
 * _isupper - check if uppercase
 *
 * @c: int parameter
 *
 * Return: 0 to terminate the program
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
