#include <stdio.h>
/**
 * main - this program shows lowercase alphabets reversed
 * Description - printing all possible different combinations of two digits.
 * Return:0
 */
int main(void)
{
	int n = 0;

	int m;

	while (n <= 8)
	{
		m = n + 1;
		while (m <= 9)
		{
			putchar(n + 48);
			putchar(m + 48);
			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);

}

