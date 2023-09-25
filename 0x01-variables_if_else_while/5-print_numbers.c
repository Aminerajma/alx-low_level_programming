#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digits starting with 0 using printf
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
