#include <stdio.h>


/**
 * main - main function
 *
 * Return: 0 Always success
 *
 */


int main(void)
{
	printf(" Size of a char: %lu byte(s)\n ", sizeof(char));
	printf(" Size of int: %lu byt(s)\n ", sizeof(int));
	printf(" Size of long int: %lu byte(s)\n ", sizeof(long int));
	printf(" Size of long long int: %lu byte(s)\n ", sizeof(long long int));
	printf(" Size of a float: %lu byte(s)\n ", sizeof(float));
	return (0);
}
