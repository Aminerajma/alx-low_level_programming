#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
