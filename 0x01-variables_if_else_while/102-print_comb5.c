#include<stdio.h>
/**
 * main - print 1-100
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int m, n; /*initialize 2 variables*/

	for (m = 0; m < 10; m++) /*loop to print first number*/
	{
		for (n = 0; n < 10; n++) /*loop to print second number*/
		{
			if (m < n)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(32);
				putchar(o + '0');
				putchar(p + '0');
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
