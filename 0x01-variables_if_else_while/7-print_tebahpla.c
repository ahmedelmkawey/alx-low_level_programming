#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : that prints the alphabet in lowercase  reverse,
 *
 * Return: Always (0) (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);

	}
		putchar('\n');
	return (0);
}
