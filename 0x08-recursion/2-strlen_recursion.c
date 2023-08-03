#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s)
	{
		c++;
		c += _strlen_recursion(s + 1);
	}

	return (c);
}
