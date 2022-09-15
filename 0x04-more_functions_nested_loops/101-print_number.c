#include "main.h"
/**
 * print_number - prints number
 *
 * @n: integger to print to character
 */
void print_number(int n)
{
	long a;
	int c;
	long n;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	
	b = 1;
	c = 1;
	while (c)
	{
		if (n / (b * 10) > 0)
			b *= 10;
		else
			c = 0;
	}
	while (n >= 0)
	{
		if (b == 1)
		{
			_putchar(n % 10 + '0');
			n = -1;
		}
		else
		{
			_putchar((n / b % 10) + '0');
			m /= 10;
		}
	}
}

