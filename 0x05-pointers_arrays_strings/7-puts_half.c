#include "main.h"
/**
  * puts_half - prints second half length of a string
  *@str: string to be printed
  * Return: void
  */
void puts_half(char *str)
{
	int counter, n, j;

	counter = 0;
	while (str[counter] != '\0') /* counts string chars*/
	{
		counter++;
	}
	if (counter % 2 != 0) /* checks odd*/
	{
		n = (counter - 1) / 2;
		while (n < counter - 1)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	else
	{
		j = counter / 2;
		while (j < counter)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}

