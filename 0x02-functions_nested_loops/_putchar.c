#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the characters c to stdout
 * @c is the character to print
 *
 * return: on succes 1
 */
int _putchar(char c)
{
	return (write(1,&c.1));
}

