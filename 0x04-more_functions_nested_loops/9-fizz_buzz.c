#include <stdio.h>

/**
 * main - Prints Fizz Buzz program
 * return: always returns 0
 */

int main(void)
{
        int n;

        for (n = 1; n <= 100; n++)
        {
                if (n % 3 == 0 && n % 5 == 0)
                {
                        printf("FizzBuzz ");
                }
                else if (n % 3 == 0)
                {
                        printf("Fizz ");
                }
                else if (n % 5 == 0)
                {
                        printf("Buzz ");
                }
                else
                {
                        _putchar("%d ", n);
                }
		if (a != 100)
		{
			printf(" ");
		}
        }
        _putchar('\n');
        return (0);
}
