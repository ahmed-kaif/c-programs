#include<stdio.h>

int gVar;
void f2(void)
{
    printf("%i\n",gVar);
}

void function (void)
{
    gVar = 10;
    printf("%i\n",gVar);               /** !! Global variable changes if a function changes it...!! **/
}
int main(void)
{
    f2();                              /** f2 is called before changing the value of gVar so "gVar = 0" **/

    function();

    f2();                              /** Now the f2 is called after changing the value of gVar so "gVar = 10" **/

    printf("%i\n",gVar);

    return 0;
}
