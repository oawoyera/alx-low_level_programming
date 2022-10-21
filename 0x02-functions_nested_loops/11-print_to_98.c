#include "main.h"

/**
 * print_to_98 - print numbers up to 98
 * @n: the starting number
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i >= 0)
			{
				if (i < 10)
				{
					_putchar(i + '0');
				}
				else
				{
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				int j = 0 - i;

				_putchar('-');
				if (j >= 100)
				{
					_putchar((j / 100) + '0');
					_putchar(((j % 100) / 10) + '0');
					_putchar((j % 10) + '0');
				}
				else if ((j >= 10) && (j <= 99))
				{
					_putchar((j / 10) + '0');
					_putchar((j % 10) + '0');
				}
				if (j < 10)
					_putchar(j + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i > 99)
				_putchar((i / 100) + '0');
			_putchar(((i % 100) / 10) + '0');
			_putchar((i % 10) + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
