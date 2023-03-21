#include "main.h"

/**
 * _islower - check for lower case character
 * @c: The character to be checked
 * Return: 1 for lovercase character or 0 fror anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
