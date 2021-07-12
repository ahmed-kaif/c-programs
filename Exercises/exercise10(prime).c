#include<stdio.h>
#include<stdbool.h>
bool even(int x)
{
    if(x!=2)
        if(x%2==0)
            return true;
    else return false;
}
bool odd(int x)
{
    if(x!=3||x!=5||x!=7)
        if(x%3==0||x%5==0||x%7==0)
        return true;

    else return false;
}
int prime(int x)
{
    bool isPrime;
    if(x==2||x==3||x==5||x==7)
        isPrime = 1;

    else if(x==1||x==0)
        isPrime = 0;

    else if(even(x)==false && odd(x)==false)
    isPrime = 1;

    else
    isPrime = 0;

    return isPrime;


}
int main(void)
{
    int num;
    scanf("%i",&num);

    printf("%i",prime(num));

    return 0;

}


