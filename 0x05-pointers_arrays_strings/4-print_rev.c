#include "main.h"
/**
  * print_rev - prints string in reverse
  * @s:string to be reversed
  * Return:void
  */
void print_rev(char *s)
{
	int i;/*, j; for for loop*/

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	/**
	* for (j = i - 1; j >= 0; j--)
	*{
	*	_putchar(s[j]);
	*}
	*/
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
