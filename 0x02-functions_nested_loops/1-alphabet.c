#include <stdio.h>
/**
 * print_alphabe - check code
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
}
