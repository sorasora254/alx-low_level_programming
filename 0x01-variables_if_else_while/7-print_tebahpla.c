#include <stdio.h>
/**
 * main - entry point
 * Description:
 * Return: zero
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
