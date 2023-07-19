#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 0;

	while
		(count < 10)
		{
			char currentletter = letter;

			while (currentletter <= 'z')
			{
				putchar(currentletter);
				currentletter++;
			}
			count++;
		}
	putchar('\n');
}
