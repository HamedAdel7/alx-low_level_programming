#include "lists.h"

void before_main() __attribute__ ((constructor));

/**
 * _constructor - before main
 * Return: void
*/

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
