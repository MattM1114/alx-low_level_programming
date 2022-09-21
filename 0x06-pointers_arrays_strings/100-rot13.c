#include "main.h"
#include <stdio.h>
/**
 * rot13 - Endcodes a string using rot13.
 * @s: The string to encode
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	int a = 0;

	while (s[a])
	{
		while ((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'z'))
		{	
