#include<stdio.h>
/**
 * main - print 1-100
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int m, n, o;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			for (o = 0; o < 10; o++)
			{
				if ((m < n) && (n < o))
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(o + '0');
					if (!((m == 7) && (n == 8) && (o == 9)))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
