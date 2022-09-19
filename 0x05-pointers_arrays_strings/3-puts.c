#include "main.h"
/**
 * _puts - prints a string
 * @str: the string
 *
 * Return; the length of a string
 */
void _puts (char *str)
{
	int m = 0;

	while (*(str + m))
	{
		_putchar(*(str + m));
		m++;
	}
	_putchar('\n');
}
