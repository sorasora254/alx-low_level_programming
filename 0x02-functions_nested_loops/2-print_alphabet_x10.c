#include "main.h"

/**
 *print_alphabet_x10 - program will print the alphabet 10_time
 *Return: void
 */

void print_alphabet_x10(void)
{

	char ch;
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
