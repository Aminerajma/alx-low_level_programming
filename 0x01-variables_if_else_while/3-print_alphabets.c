#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets lowercase and uppercase
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char alp = 'a';
	char alpU = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (alpU <= 'Z')
	{
		putchar(alpU);
		alpU++;
	}
	putchar('\n');
	return (0);
}
