#include <stdio.h>
#include <math.h>
/**
 * main - finds the largest prime
 * Description:Uses headers to link and a nested loop to achieve goal
 * Return: 0 if no errors 
 */
int main(void)
{
	unsigned long i = 2;
	unsigned long big = 0;
	unsigned long numb = 612852475143;

	while (numb > i)
	{
		while (numb % i == 0)
		{
			if (i > big)
				big = i;
			numb = numb / i;
		}
		i++;
	}
	printf("%lu\n", big);
	return (0);
}