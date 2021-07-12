#include<stdio.h>

int main()
{
    int hour,chapter,i,total,chapterNo;
    scanf("%i %i",&hour,&chapter);
     total = 0;
    for(i=0;i<chapter;i++)
    {
        scanf("%i",&chapterNo);
        total += chapterNo;

    }
            if(total <= hour)
                printf("YES\n");

    else printf("NO\n");

    return 0;
}
