///Program 9.2 - function to count characters in a string.
#include<stdio.h>

int stringLength(const char string[]) // **const** bcz it doesn't change the array
{
	int count = 0;

	/*     while(string[count] != '\0') // '\0' is called the null character which points the end of a string */
	/*         ++count; */
	while (string[count]) { // same as the above code block
		++count;
	}
	return count;
}
int main(void)
{
	int stringLength(const char string[]); // prototype declaration

	const char word1[] = {'a','s','t','e','r','\0'};
	const char word2[] = {'a','t','\0'};
	const char word3[] = {'\0'};
	const char word4[] = "\033\"Hello\"\n"; // 9 characters: '\033', '\"', Hello -> 5, '\"', '\n'
	
	const char letters[] = {"abcdefghijklmnopqrstuvwxyz\
ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	
	const char letters2[] = {"abcdefghijklmnopqrstuvwxyz"
							"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	printf("%i %i %i %i %i %i\n",stringLength(word1),stringLength(word2),stringLength(word3), stringLength(word4), stringLength(letters), stringLength(letters2));

	return 0;
}
