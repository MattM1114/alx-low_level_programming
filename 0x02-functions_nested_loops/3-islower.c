#include "main.h"

/**
 * islower - main function
 * @c: character to compare
 * Retrun: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
