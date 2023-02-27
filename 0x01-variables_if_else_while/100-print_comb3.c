#include <stdio.h>
/**
 * main - this is the main function
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
int main(void)
{
	int ones = '0', tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
	for (ones = '0'; ones <= '9'; ones++)
	{
	if (!((ones == tens) || (tens > ones)))
	{
	putchar(tens);
	putchar(ones);
	if (!(ones == '9' && tens == '8'))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
