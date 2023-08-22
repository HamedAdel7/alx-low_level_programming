#include "main.h"

/**
 * swap_int - swaps the value of two integer
 * @a: first input
 * @b: second input
*/

void swap_int(int *a, int *b)
{
	int cross;

	cross = *a;
	*a = *b;
	*b = cross;
}
