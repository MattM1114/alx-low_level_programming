#include "main.h"
/**
 * print_number - prints number
 *
 * @n: integer to print to character
 */
void print_number(int n)
{
	long a;
	int c;
	long num;

	num = n;

	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}
	
	b = 1;
	c = 1;
	while (c)
	{
		if (num / (b * 10) > 0)
			b *= 10;
		else
			c = 0;
	}
	while (num >= 0)
	{
		if (b == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / b % 10) + '0');
			m /= 10;
		}
	}
}

