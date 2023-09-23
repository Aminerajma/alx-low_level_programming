#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints using write function
 *
 * Return: 1 (Failed)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(1, quo, 59);
	return (1);
}
