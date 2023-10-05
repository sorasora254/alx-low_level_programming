#include <stdio.h>
/**
 * main - this where code is executed
 * Descriptoin: Printing the sizes of different variables
 * Return: always return zero
 */
int main(void)
{
	printf("Size of a Char: %c byte(s)",sizeof(char));
	printf("Size of an int: %d byte(s)",sizeof(int));
	printf("Size of a long int: %ld byte(s)",sizeof(long int));
	printf("Size of a long long int; %lld byte(s)",sizeof(long long int));
	printf("Size of a float: %f byte(s)",sizeof(float));
	return (0);
}
