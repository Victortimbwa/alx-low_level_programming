#include "main.h"
/**
  * rev_string - reverses a string
  * @s:string to be reversed
  * Return 0;
  */
void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0') /* counts the characters in array */
	{
		i++;
	}
	i--;
	j = 0;
	while (i >= j)
	{
		char temp = s[j]; /* Use a temporary variable to swap characters*/

		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;
	}
}
