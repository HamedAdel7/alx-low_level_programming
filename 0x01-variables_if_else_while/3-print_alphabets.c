#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C programmig to print alphabets capital and small
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a', CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
