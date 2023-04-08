#include "main.h"
#include <stdio.h>

/**
 * main - print the number of args
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
