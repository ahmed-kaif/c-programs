// Program 9.6 Reading lines of data
#include <stdio.h>

int main(void)
{
	int i;
	char line[81];
	void readLine(char buffer[]);
	printf("Enter a line of text, up to 80 characters. Hit Enter when done:\n");
	for(i = 0; i < 3; i++)
	{
		readLine(line);
		printf("%s\n\n", line);
	}

	return 0;
}
// function to read a line of text form the terminal
void readLine(char buffer[])
{
	char character;
	int i = 0;

	do {
	character = getchar();
	buffer[i] = character;
	++i;
	}
	while (character != '\n');
	buffer[i-1] = '\0'; 
	// i-1 indexes the correct position of the array beacause loop increments 1.
	// e.g. if i = 81 loop runs 82 times so i-1 = 81 
}
