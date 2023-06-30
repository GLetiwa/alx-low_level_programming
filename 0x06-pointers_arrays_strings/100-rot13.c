#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
<<<<<<< HEAD
 * @n: pointer to string params
 *
 * Return: *n
 */
char *rot13(char *n)
{
	int i, j;

	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while (n[i] != '\0' && (n[i] >= 65 && n[i] <= 122))
		{
			if (((n[i] >= 'N') && (n[i] <= 'Z')) || ((n[i] >= 'n') && (n[i] <= 'z')))
				n[i] = n[i] - 26;
			n[i] = n[i] + 13;
			j++;
		}
		i++;
	}
	return (n);
=======
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
>>>>>>> 30df178e2fd08e79c725232fe3c4c824b0b1cdc9
}
