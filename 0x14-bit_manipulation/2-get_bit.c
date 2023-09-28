#include "main.h"

/**
 * get_bit - get bit index
 * @n: num of index
 * @index: the bit
 * Return: bit state
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
