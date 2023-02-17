#include <stdio.h>

/** 
 * main - Entry point
 * description : program that prints the size of datatypes
 * Return : 0 to terminate the program
 */

int main(void)
{ 
	char ch;
	pritnf("size of a char: %lu byte(s)\n",sizeof(ch));
	int x;
	pritnf("size of a int: %lu byte(s)\n",sizeof(x));
	long int y;
	pritnf("size of a long int: %lu byte(s)\n",sizeof(y));
	long long int s;
	pritnf("size of a long long int: %lu byte(s)\n",sizeof(s));
 	float f;
	pritnf("size of a float: %lu byte(s)\n",sizeof(f));
}
