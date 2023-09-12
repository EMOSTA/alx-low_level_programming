#include <stdio.h>
/**
 * main - finction
 *
 * Return: alwayes 0
 */

int main(void)
{
	char f;

	for (f = 'z' ; f >= 'a' ; f--)
		putchar(f);
	putchar('\n');
	return (0);
}
