#include <stdio.h>
#include <math.h>

int f2(int a) 
{
	return a*2;
}
int makeItTriple(int a){
	return a*3;
}

int main()
{
	printf("%i", f2(3));
	printf("%i", makeItTriple(3));
}

