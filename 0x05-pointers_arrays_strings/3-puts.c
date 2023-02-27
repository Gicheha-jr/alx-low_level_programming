#include "main.h"

/**
 * _puts - Print a string
 * @str: The string to print
 * Return: Void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
