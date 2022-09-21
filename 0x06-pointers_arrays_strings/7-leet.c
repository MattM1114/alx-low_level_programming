#include "main.h"

/**
 * leet - encodes a string 1337.
 * @s: The string to be encode.
 * Return: A pointer to the encded string.
 */
char *leet(char *s)
{
	int a = 0, b = 0, c = 5;
	char d[5] = {'A', 'E', 'O', 'T', 'L'};
	char e[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < 1)
		{
			if (s[a] == [b] || s[a] - 32 == d[b])
			{
				s[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}

