#include <stdio.h>

/**
 * main - print the alphabet, lowercase and then uppercase,
 * then a new line
 * Return: 0 always
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}