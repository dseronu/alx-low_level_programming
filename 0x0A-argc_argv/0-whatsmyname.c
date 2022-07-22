#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */

int main(int argc, char agrv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
