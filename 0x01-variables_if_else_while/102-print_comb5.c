#include<stdio.h>
/**
 * main - print 1-100
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int m, n; /*initialize 2 variables*/

	for (m = 0; m < 100; m++) /*loop to print first number*/
	{
		for (n = 0; n < 100; n++) /*loop to print second number*/
		{
			if (m < n)
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar(32);
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				if (!((m == 98) || (n == 99)))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
