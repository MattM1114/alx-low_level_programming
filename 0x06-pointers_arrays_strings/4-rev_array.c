#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integgers
 * @a: An array of integers
 * @n: Number of elements to swap
 *
 * Return: empty
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}

