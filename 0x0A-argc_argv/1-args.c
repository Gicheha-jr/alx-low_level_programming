#include "main.h"
#include <stdio.h>

/**
 * main - Print the numbers of argc
 * @argc: argument count
 * @agrv: argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *agrv[])
{
	(void) agrv;
	printf("%d\n", argc - 1);
	return (0);
}
