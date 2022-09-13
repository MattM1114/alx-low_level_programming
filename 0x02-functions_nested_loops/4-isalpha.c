#include "main.h"
/**
 * _isaplha - main function
 *
 * @c: character to compare
 *
 * Return: 1 if ture, 0 if false
 *
 */

int _isalpha(int c)
{
	if ((C >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
