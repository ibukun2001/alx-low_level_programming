#include <stdio.h>

/**
 * main - printsin lowercase,
 * then a new line, except q and e
 * Return: Aways 0 
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}