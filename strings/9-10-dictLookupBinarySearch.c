//Dictonary Lookup Program Using Binary Search Algorithm
//
#include <stdio.h>

struct entry 
{
	char word[15];
	char definition[50];
};

// Function to compare 2 strings

int compareStrings(const char s1[], const char s2[])
{
	int i = 0, answer;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') 
		++i;

	if (s1[i] < s2[i])
		answer = -1;
	else if (s1[i] == s2[i])
		answer = 0;
	else
		answer = 1;

	return answer;
}	

int lookup(const struct entry dictonary[], const char searchString[], const int entries)
{
	int low = 0;
	int high = entries - 1;
	int mid,result;
	int compareStrings(const char s1[], const char s2[]);
	//Binary Search Algorithm
	//1. set low = 0; high = n - 1
	//2. if low > high -> not found, end
	//3. set mid = (low + high)/2 -> int division
	//4. if M[mid] < searchString, set low = mid + 1 goto step 2
	//5. if M[mid] > searchString, set high = mid - 1 goto step 2
	//6. if M[mid] == searchString, end.

	while (low <= high) { // check step 2
		mid = (low+high)/2; // step 3
		result = compareStrings(dictonary[mid].word, searchString);

		if(result == -1)	// dictWord < searchString
			low = mid + 1;
		else if (result == 1) // dictWord > searchString 
			high = mid - 1;
		else
			return mid; // found it
	}
	return -1;
}

int main(void)
{
	const struct entry dictonary[100] = 
	{
		{"aardvark",	"a burrowing African mammal"		},	
		{"abyss",		"a bottomless pit"					},
		{"acumen",		"mentally sharp; keen"				},
		{"addle",		"to become confused"				},
		{"aerie",		"a high nest"						},
		{"affix",		"to append; attach"					},		
		{"agar",		"a jelly made from seaweed"			},
		{"ahoy",		"a nautical call of greeting"		},
		{"aigrette",	"an ornamental cluster of feathers" },		
		{"ajar",		"partially open"					}
	};
	char word[15];
	int entries = 10;
	int entry;
	int lookup(const struct entry dictonary[], const char searchString[], const int entries);

	printf("Enter word: ");
	scanf("%14s", word);
	entry = lookup(dictonary, word, entries);

	if(entry != -1)
		printf("%s\n",dictonary[entry].definition);
	else
		printf("Sorry, the word %s is not in my dictonary.\n", word);
}
