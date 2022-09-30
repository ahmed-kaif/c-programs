// Function to determine if a character is alphabetic
#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '\'')) {
		return true;
	}
	else if ((c >= '0' && c <= '9') || (c == ',' || c == '.')) {
		return true;
	}
	else {
		return false;
	}
}

// Function to count the number of words in a string

int countWords(const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic(char const c);

	for (i=0; string[i] != '\0'; ++i) {
		if(alphabetic(string[i]))
		{
			if(lookingForWord)
			{
				++wordCount;
				lookingForWord = false;
			}
		}
		else {
			lookingForWord = true;
		}
	}
	return wordCount;
}

int main(void)
{
	const char text1[] = "Well, I'm here goes. 12,34";
	const char text2[] = "And Here we go... again. 10.00 ..."; // TODO: Problem in counting numbers,period and comma
	int countWords(const char string[]);

	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));

	return 0;
}
