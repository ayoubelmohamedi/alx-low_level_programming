#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++){
		str += 1;
		_putchar(*str);	
	}
	_putchar('\n');
}
