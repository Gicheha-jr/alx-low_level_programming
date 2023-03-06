#include "main.h"
#include <stdio.h>

/**
 * main - CAheck the code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Robert Allen";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s1, s0);
	return (0);
}
