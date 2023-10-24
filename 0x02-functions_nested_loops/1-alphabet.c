#include "main.h"

/**
 * print_alphabet - make the alphabet in lowercase
 * Description: programm will print alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
