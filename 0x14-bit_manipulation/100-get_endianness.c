#include "main.h"

/**
 * get_endianness - retur the end
 * Return: big endian
*/

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
