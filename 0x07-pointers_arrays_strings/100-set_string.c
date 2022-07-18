#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: double pointer to be copied
 * @to: where s gets set to
 */
void set_string(char **s, char *to)
{
	char str = "a";
	
	*to = str;
	**s = *to;
}
