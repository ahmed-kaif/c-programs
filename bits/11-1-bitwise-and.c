#include <stdio.h>
int main()
{
  unsigned int word1 = 076u, word2 = 0150u, word3 = 0210u;

  printf("%o ", word1 & word2);
  printf("%o ", word1 & word1);
  printf("%o ", word1 & word2 & word3);;
  printf("%o\n", word1 & 1);
 
  return 0;
}
