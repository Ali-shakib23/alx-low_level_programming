#include "main.h"
/**
 * _islower - check if lowercase
 *
 * Return: 0 to terminate the program
 */
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	return (0);
}

