#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : that prints the alphabet in lowercase, followed by a new line.
 *and upper case
 * Return: Always (0) (Success)
 */

int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	for (CH = 'A'; CH <= 'A'; CH++)
	{
		putchar(ch);
		putchar(CH);

	}
		putchar('\n');
	return (0);
}
