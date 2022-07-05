#include "main.h"

/**
 * _islower - main block
 * @c: integer
 * Descritption: functions that checks for lowercaser character
 * Return: return 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
