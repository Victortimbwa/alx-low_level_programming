#include "main.h"
/**
  * _isdigit - Function to check digits(0-9)
  * @c: digit to be checked
  * Return: 1 if y is a digit, 0 otherwise.
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
