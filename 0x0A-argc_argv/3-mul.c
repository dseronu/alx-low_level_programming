#include <stdio.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: offser count
 * @argv: offset value
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	print("%d\n", mul);
	return (0);
}
