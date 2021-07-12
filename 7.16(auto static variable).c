///program to illustrate static and automatic variable
#include<stdio.h>

void auto_static (void)
{
    int        autoVar = 1;
    static int statVar = 1;
    printf("automatic = %i, static = %i\n",autoVar,statVar);
    ++autoVar;
    ++statVar;
}
int main(void)
{
    int i;
    void auto_static(void);

    for(i=0;i<5;++i)
        auto_static();

    return 0;
}

