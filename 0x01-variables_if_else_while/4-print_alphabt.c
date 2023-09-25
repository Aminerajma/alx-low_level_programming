#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets except e and q
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'e' || alp == 'q')
			alp++;
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
