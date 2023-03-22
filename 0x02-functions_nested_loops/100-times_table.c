#include "main.h"

/*
 * task 12
 */

/**
 * print_times_table - print the times table of input starting with 0.
 * @n: times value wich will bw printed
 */

void print_times_table(int n)
{
	int alt, lat, tal;

	if (n >= 0 && n <= 15)
	{
		for (alt = 0; alt <= n; alt++)
		{
			_putchar('0');

			for (lat = 1; lat <= n; lat++)
			{
				_putchar(',');
				_putchar(' ');

				tal = alt * lat;

				if (tal <= 99)
					_putchar(' ');
				if (tal <= 9)
					_putchar(' ');

				if (tal >= 100)
				{
					_putchar((tal / 100) + '0');
					_putchar(((tal / 10)) % 10 + '0');
				}
				else if (tal <= 99 && tal >= 10)
				{
					_putchar((tal / 10) + '0');
				}
				_putchar((tal % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
