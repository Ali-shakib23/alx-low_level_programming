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
	int last_digit;
	last_digit =  n % 10;

	char last;
	last = (char) last_digit;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %c and is greater than 5/n", n, last);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %c and is 0/n", n, last);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %c and is less than 6 and not 0/n", n, last);
	}
	return (0);
}
