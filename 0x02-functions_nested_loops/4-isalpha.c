#include "main.h"
/**
 * _isalpha - check if it is a letter
 *
 * @c: character 
 *
 * Return: 0 to terminate the program
 */
int _isalpha(int c)
{
	if (c == 'a' && c == 'z')
	{
		return (1);
	}
	else if (c == 'A' && c == 'Z')
	{
		return (1);
	}
	return (0);
}
