#include "main.h"
/**
 * print_alphabet -This prints the alphabet, in lowercase
 */
void print_alphabet(void)

{
	char ch;

	ch = 'a';

	while (ch <= 'z')

	{
		putchar(ch);
		ch++;
	}
	_putchar('\n');

}
