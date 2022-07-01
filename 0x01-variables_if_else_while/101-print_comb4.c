#include <stdio.h>

/**
 *  main - main entry block
 *  Description: Prints all possible different combinations of three digits
 *  Return: 0
 */
int main(void)
{
	int c, d , e;
	
	c = 48;
	d = 48;
	e = 48;

	while (c < 58)
	{
		d = c + 1;
		while (d < 58)
		{
			e = d + 1;
			while (e < 58)
			{
				{
					putchar(c);
					putchar(d);
					putchar(e);
					if (c < 55 || d < 56 || e < 57)
					{
						putchar(',');
						putchar(' ');
					}
					c++;
				}
				d++;
			}
			e++;
		}
	}
	putchar(10);
	return (0);
}
