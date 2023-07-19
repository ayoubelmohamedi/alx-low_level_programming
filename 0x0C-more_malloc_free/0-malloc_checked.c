#include"main.h"
#include<stdlib.h>


void main (void)
{
	unsigned int b;
	b = sizeof(int)*3);
	
	*malloc_checked(sizeof(b)*(int));
}
void *malloc_checked(unsigned int b)
{
	int* ptr; 
	ptr = malloc(b); 
		
	if (ptr == NULL)
	{
		return (int*)98;
	}	
	return (int*) ptr;
}
