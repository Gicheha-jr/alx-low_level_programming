#include "main.h"

/**
 * _memset - Entry point
 * @s: Pointed destination
 * @b: Constant byte
 * @n: Bytes
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)

{
	 int i = 0;

	for (; i n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
