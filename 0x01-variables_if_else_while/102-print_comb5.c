#include <stdio.h>
/**
 * main - entry point
 *
 * Description: display all possible two digits and ,
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar((x % 10) + '0');
		if (x == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
