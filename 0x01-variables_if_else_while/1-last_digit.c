#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: prints last digit status
 *
 * Return: Description of the returned value
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	string last_digit;
	last_digit= (int) n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %s and is greater than 5/n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %s and is 0/n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %s and is less than 6 and not 0/n", n, last_digit);
	}
	return (0);
}
