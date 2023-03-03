#include "main.h"

/**
 * reverse_array - reverses the contet of array of integers
 * @a: The array of integer to be reversed.
 * @n: The number of array in the element.
 *
 */

void reverse_array(int *a, int n)

{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
