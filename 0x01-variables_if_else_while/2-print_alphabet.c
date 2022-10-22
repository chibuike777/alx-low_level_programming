#include<stdio.h>

/**
 * main - prints alphabets
 *
 * Return: always 0
 **/

int main(void)
{
	int n;

	n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
