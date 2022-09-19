#include "main.h"
/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 *
 * Return; the length of a string
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	_putchar('\n');
}

