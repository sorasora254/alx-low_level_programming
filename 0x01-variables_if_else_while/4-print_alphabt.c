#include <stdio.h>
/**
 * main - entry point
 * Description:
 * Return: zero success
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
