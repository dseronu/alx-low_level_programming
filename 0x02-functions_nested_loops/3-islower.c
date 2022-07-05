#include "main.h"

/**
 * _islower - main block
 * Descritption: functions that checks for lowercaser character
 * Returns: Always 0
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
