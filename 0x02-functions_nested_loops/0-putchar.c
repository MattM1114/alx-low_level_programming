#include "stdio.h"
/**
 * main - Entry point
 * Return: Always (0)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	putchar('\n');
	return (0);
}
