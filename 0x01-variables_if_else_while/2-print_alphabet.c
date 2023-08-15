#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C programming to display the alphabet in lowercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while ('a' <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
