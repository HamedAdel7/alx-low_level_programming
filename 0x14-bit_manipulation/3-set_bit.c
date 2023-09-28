#include "main.h"

/**
 * set_bit - set the bit
 * @n: the num of index
 * @index: the bit
 * Return: the bit state
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
