#include <stdio.h>
/**
 * main - fizz bizz holterton style
 * Description: uses headers to link and a nested loop to achieve goal
 * fizz buzz from 1 - 100. print fizz for multiples of 3 and buzz for
 * multiples of 5 and fizzbuzz for multiples of both eg. 15
 * could use a switch for neater and better code
 * Return: 0 if no errors
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

