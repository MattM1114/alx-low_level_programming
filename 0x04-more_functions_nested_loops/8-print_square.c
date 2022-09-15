#include "main.h"
/**
 * print_square - prints a size by size square
 * @size: an int given by main
 *
 * Description: Uses headers to link and a nested loops to achieve goal
 * Return: void. no return.
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = size; a > 0; a--)
	{
		for (b = size; b > 0; b--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

