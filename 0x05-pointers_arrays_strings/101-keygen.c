#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is the main function
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
int main(void)
{
	int password[100], i, sum = 0, n;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
	password[i] = rand() % 78;
	sum += (password[i] + '0');
	putchar(password[i] + '0');
	if ((2772 - sum) - '0' < 78)
	{
	n = 2772 - sum - '0';
	sum += n;
	putchar(n + '0');
	break;
	}
	}
	return (0);
}
