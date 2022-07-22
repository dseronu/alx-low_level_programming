#include "main.h"

/**
 * _islower - function that check the if character is lowercase or not
 * @c: tested character
 * Return: returns 1 if it is lowercase, 0 if not
 */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);

        return (0);
}
