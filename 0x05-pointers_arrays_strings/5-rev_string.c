#include "main.h"

/**
 *  rev_string - Reverses a string
 *  @s: The string to be modified
 *  Description: function prints string in reverse followed by a new line.
 *  Return: void
 */
void rev_string(char *s)
{
	int lenght = 0;
	int i;
	int ch;

	while (s[lenght] != '\0')
		lenght++;
	/* lenght-- es para que no tome el ultimo espacio que es vacío*/

	for (lenght--, i = 0; i <= lenght; lenght--, i++)
	{
		ch = s[i];
		s[i] = s[lenght];
		s[lenght] = ch;
	}
}
