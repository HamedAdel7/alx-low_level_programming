#include "main.h"

/**
 * clear_bit - clear the bit
 * @n: the num of index
 * @index: the bit
 * Return: bit state
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
