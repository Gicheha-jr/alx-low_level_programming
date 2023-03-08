#include "main.h"

/**
 * _pow_recursion - Calculate the factorial number
 * @y: The number to multiply the value.
 * @x: The value to multiply.
 * Return: integer number
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
