#include<stdio.h>

/**
 * main - main entry block
 * Return: always 0
 */

int main(void)
{
	print("The size of a character: %d byte(s)\n", sizeof(char));
	print("The size of an integer: %d byte(s)\n", sizeof(int));
	print("The size of a float: %d byte(s)\n", sizeof(float));
	print("The size of a double data type : %d byte(s)\n", sizeof(double));
	return (0);
}
