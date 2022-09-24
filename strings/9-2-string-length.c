///Program 9.2 - function to count characters in a string.
#include<stdio.h>

int stringLength(const char string[]) // **const** bcz it doesn't change the array
{
    int count = 0;

    while(string[count] != '\0') // '\0' is called the null character which points the end of a string
        ++count;

    return count;
}
int main(void)
{
    int stringLength(const char string[]); // prototype declaration

    const char word1[] = {'a','s','t','e','r','\0'};
    const char word2[] = {'a','t','\0'};
    const char word3[] = {'\0'};

    printf("%i %i %i\n",stringLength(word1),stringLength(word2),stringLength(word3));

    return 0;
}
