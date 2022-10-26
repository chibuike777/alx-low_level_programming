#include<stdio.h>
/**
 * main - print 1-100
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int m, n, o, p; /*initialize 4 variables*/

	for (m = 0; m < 10; m++) /*loop to print first number*/
	{
		for (n = 0; n < 10; n++) /*loop to print second number*/
		{
				putchar(m + '0');
				putchar(n + '0');
				putchar(32);
				for (o = 0; o < 10; o++) /*loop to print third number*/
				{
					for (p = 0; p < 10; p++) /*loop to print fourth number*/
					{
						if (!((m > o) && (n >= p))) /*avoid repetition*/
						{
							putchar(o + '0');
							putchar(p + '0');
							if (!((m == 9) && (n == 8) && (o == 9) && (p == 9))) /*last number has no ,*/
							{
								putchar(44);
								putchar(32);
							}
						}
					}
				}
		}
	}
	putchar('\n');
	return (0);
}
