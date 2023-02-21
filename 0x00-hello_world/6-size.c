#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: lowercase and uppercase
 *
 * Return: 0 to terminate the program
 */
int main(void)
{ 
	char ch;
	printf("size of a char: %lu byte(s)\n", sizeof(ch));
	int x;
	printf("size of a int: %lu byte(s)\n", sizeof(x));
	long int y;
	printf("size of a long int: %lu byte(s)\n", sizeof(y));
	long long int s;
	printf("size of a long long int: %lu byte(s)\n", sizeof(s));
 	float f;
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
