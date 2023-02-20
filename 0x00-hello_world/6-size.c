#include<stdio.h>
/**
 *main - Entry point
 *Return: 1 if the function runs well. 0 otherwise
 */
int main(void)
{
	printf("Size of char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of long: %lu byte(s)", sizeof(long));
	printf("Size of long long int:%lu byte(s)", sizeof(long long int));
	printf("Size of float: %lu byte(s)", sizeof(float));
	return (0);
}
