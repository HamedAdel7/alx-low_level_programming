#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C programming to print
 *              all single digit numbers of base 10 starting
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
