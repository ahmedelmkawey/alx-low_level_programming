#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : prints all possible combinations of single-digit numbers with
 *
 * Return: Always (0) (Success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
	if (x < 9)
		{
		putchar(',');
		 putchar(' ');	       
		}
		x++;
	}
		putchar('\n');
		return (0);
}
