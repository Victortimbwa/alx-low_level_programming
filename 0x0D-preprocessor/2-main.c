#include <stdio.h>
/**
  * main - This function prints the name of file
  * Return:0 Always
  */
#define FILENAME __FILE__

int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
