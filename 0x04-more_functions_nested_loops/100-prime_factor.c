#include <stdio.h>
#include <math.h>
/**
 * main - finds the largest prime
 * Description:Uses headers to link and a nested loop to achieve goal
 * 612852475143
 * Return: 0 
 */
int main(void)
{
	int i;
	long numb = 612852475143;

	for ( i = (int) sqrt(numb); i > 2; i++)
	{
		if (numb % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}
