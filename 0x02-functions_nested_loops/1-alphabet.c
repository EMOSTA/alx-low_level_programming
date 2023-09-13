#include "main.h"

/**
 * * print_alphabet - prints alphabet to stdout,
 * * Description: prints alphabet in lowercase using _putchar function.
 * * Return: Always Returns Nothing
 * */
void print_alphabet(void)
{
		const char *alphabet = "abcdefghijklmnopqrstuvwxyz";
			int i                = 0;

				while (alphabet[i] != '\0')
						{
									_putchar(alphabet[i]);
											i++;
												}
					_putchar('\n');
}

