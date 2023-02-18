#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: single digits of base 10
 *
 * Return: 0 to terminate the program
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
