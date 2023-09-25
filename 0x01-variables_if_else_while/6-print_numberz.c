#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digits starting with 0 using putchar
 *
 *Return: always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		digit++;
	}
	putchar('\n');

	return (0);
}
