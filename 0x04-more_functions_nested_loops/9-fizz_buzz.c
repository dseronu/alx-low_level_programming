#include <stdio.h>

/**
 * main - Fizz Buzz code
 * return: void
 */

int main(void)
{
        int n;

        for (n = 1; n <= 100; n++)
        {
                if (n % 3 == 0 && n % 5 == 0)
                {
                        _putchar("FizzBuzz ");
                }
                else if (n % 3 == 0)
                {
                        _putchar("Fizz ");
                }
                else if (n % 5 == 0)
                {
                        _putchar("Buzz ");
                }
                else
                {
                        _putchar("%d ", n);
                }
        }
        _putchar('\n');
        return 0;
}
