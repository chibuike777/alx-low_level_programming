#include<stdio.h>
/**
 * main - print 1-1000
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (!(m >= n))
			putchar(m + '0');
			putchar(n + '0');
			if (!((m == 8) && (n == 9)))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
