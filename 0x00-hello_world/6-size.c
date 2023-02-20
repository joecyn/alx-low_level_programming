#include<stdio.h>
/**
 *main - Entry point
 *Return: 1 if the function runs well. 0 otherwise
 */
int main(void)
{
	printf("Size of char: %ld byte(s)", sizeof(char));
	printf("Size of int: %ld byte(s)", sizeof(int));
	printf("Size of long: %ld byte(s)", sizeof(long));
	printf("Size of long long int:%ld byte(s)", sizeof(long long int));
	printf("Size of float: %ld byte(s)", sizeof(float));
	return (0);
