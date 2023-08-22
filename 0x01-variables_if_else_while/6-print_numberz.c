#include<stdio.h>

/**
 * main - contains the main function
 *
 * Return: always zero
 */

int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	printf("\n");
	return (0);
}
