#include "main.h"

/**
 * print_alphabet - Print alphabets in lowercase.
 */
void print_alphabet(void);
{
	char c = 'a';

	for( c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
