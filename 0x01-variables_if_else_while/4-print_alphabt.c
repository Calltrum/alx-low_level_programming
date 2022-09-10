#include<stdio.h>
/**
 * main - Prints the alphabet except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
