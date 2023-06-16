#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */


int main(void)
{
	const char* dataTypes[] = {"char", "int", "long int", "long long int", "float"};
	int  i;	
	for (i = 0 ; i < sizeof(dataTypes); i++){
		printf("Size of %s: %zu byte(s)\n", dataTypes[i], sizeof(dataTypes[i]));
	}
	return (0);
}
