#include <stdio.h>

int main()
{
	int count = 10, x;
	int *int_pointer; // read: int_pointer points to an int type;
	
	int_pointer = &count; // int_pointer points to the count variable
	x = *int_pointer; // * -> indirection operator -> set the value of the pointing variable

	printf("count = %i, x = %i\n", count, x);

	return 0;
}
