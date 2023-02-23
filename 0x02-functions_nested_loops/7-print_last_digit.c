#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of number
 *
 * @n: input as numbef integer
 *
 * Return: 0 to terminate the program
 */
int print_last_digit(int n)
{
	int m;

	m= n % 10;
	printf (m);
	return (m);
}
