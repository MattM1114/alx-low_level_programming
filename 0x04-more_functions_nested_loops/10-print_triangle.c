#include "main.h"
/**
 * print_triangle - prints a triangle line with hashtags
 * @size: an int given by main
 * Same as my 7 print diagonal. check that file and its comments
 * Description: Uses headers to link and a nested loops to achieve goal
 * can do one nested for instead of two. do a if a to b equality check
 * Return: void. no return.
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = size - a - 1; b > 0; b--)
			_putchar(' ');
		for (b = a + 1; b > 0; b--)
			_putchar('#');
		_putchar('\n');
	}
}

