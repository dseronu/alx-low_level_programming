#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - allocates mem using malloc
 *@b:int param
 *Return:pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(98);
	}
	return (p);
}
