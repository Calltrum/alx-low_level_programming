#include<stdio.h>
/**
 * main - Prints the alphabet except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (alp = 0; alp < 26; alp++)
	{
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	}
	putchar('\n');
	return (0);
}
