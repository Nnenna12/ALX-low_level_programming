#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
	printf("\n");
	return;
	}
	for (int i = 0; i < size; i += 10)
	{
	printf("%08x ", i);
	for (int j = i; j < i + 10 && j < size; j++)
	{
	if (j % 2 == 0)
	{
	printf(" ");
	}
	printf("%02x", (unsigned char)b[j]);
	}
	printf(" ");
	for (int j = i; j < i + 10 && j < size; j++)
	{
	char c = isprint(b[j]) ? b[j] : '.';
	printf("%c", c);
	}
	printf("\n");
	}
}
