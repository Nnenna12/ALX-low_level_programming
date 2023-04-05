#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to count
 *
 * Return: integer length
 */

int _strlen_recursion(char *s)
{
	if  (*s != '\n')
	{
	return (1 + _strlen_recursion((s + 1)));
	}
	else
	{
	return (0);
	}
}
