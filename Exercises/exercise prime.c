#include<stdio.h>
#include<stdbool.h>

bool prime(int x)
{
    int i;
    bool isPrime;
    if(x==2||x==3||x==5||x==7)
        isPrime = true;               ///true = 1 & false = 0;
   else
    {for(i=2;i<=x/2;i++)
      {  isPrime = x%i;

         if(isPrime == 0)
           {
               isPrime = false;
               break;
           }
         else
            {isPrime = true;
            break;}

      }
      }
    return isPrime;

}
int main(void)
{   int num;
    scanf("%i",&num);

    printf("%i",prime(num));

    return 0;
}
