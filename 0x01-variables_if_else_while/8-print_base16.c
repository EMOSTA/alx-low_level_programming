#include <stdio.h>
/**
 * main - function
 *
 * Return: alwayes 0
 */

int main(void)
{
	int a;
	char b;

	for (a = 0 ; a < 10 ; a++)
		putchar(a + '0');
	for (b = 'a' ; a <= 'f' ; a++)
		putchar(b);
	putchar('\n');
	return (0);
}
