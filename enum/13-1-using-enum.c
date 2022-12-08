// Program to print the number of days in a month

#include <stdio.h>

int main(void)
{
  enum month {
    January = 1, February, March, April, May, June, July, August,
    September, October, November, Decemnber
  };
  enum month aMonth;
  int        days;

  printf("Enter month number: ");
  scanf("%i", &aMonth);
  switch (aMonth) {
    case January:
    case March:
    case May:
    case July:
    case August:
    case October:
    case Decemnber:
        days = 31;
        break;
    case April:
    case June:
    case September:
    case November:
      days = 30;
      break;
    case February:
      days = 28;
      break;
    default:
      printf("Bad month number\n");
      days = 0;
  }

  if(days!=0)
    printf("Number of days is %i\n", days);

  if(aMonth == February)
    printf("... or 29 if its a leap year.\n");
  return 0;
}
