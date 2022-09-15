#include "main.h"
/**
 * print_most_numbers - prints 0 - 9 with a new line, exclude 2 and 4
 * Description: Uses headers to link and a nested loops to achieve goal
 * Return: void. no return.
 */
void print_most_numbers(void)
{
	int a = 0;

	for (a = 0; a< 10; a++)
		if (a != 2 && a != 4)
			_putchar(a + '0');
		_putchar('\n');
}

