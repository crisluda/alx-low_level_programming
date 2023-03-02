#include <stdio.h>
#include <math.h>
/**
 * main - this is the main function
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
int main(void)
{
	long i, m, num = 612852475143;
	double s = sqrt(num);

	for (i = 1; i <= s; i++)
	{
	if (num % i == 0)
	{
	m = num / i;
	}
	}
	printf("%ld\n", m);
	return (0);
}
