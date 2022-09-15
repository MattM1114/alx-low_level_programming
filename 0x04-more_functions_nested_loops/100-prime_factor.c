#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143, followed by a new line.
 * Return: Always (0)
 */
int main(void)
{
	unsigned long i = 2;
	unsigned long b = 0;
	unsigned long n = 612852475143;

	while (n > i)
	{
		while (n % i == 0)
		{
			if (i > b)
			{
				b = i;
			}
			n = n / i;
		}
		i++;
	}
	printf("%lu\n", b);
	return (0);
}
