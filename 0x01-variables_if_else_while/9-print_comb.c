#include <stdio.h>
/**
 * main - prints out single digit numbers of base 10 
 * Return: Always 0 (Success)
 */
int main(void)
{	
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return(0);
}

