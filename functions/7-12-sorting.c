//program to sort an array into ascending order

#include<stdio.h>

void sort (int a[], int n)
{
    int i,j,temp;
    for (i=0 ; i<n-1 ; ++i)
        for(j=i+1 ; j<n ; ++j)
           if(a[i]>a[j])
           {
               temp = a[i];
               a[i]=a[j];
               a[j]=temp;
           }
}

int main(void)
{
    int i;
    int array[16]={34,-5,6,-24,12,100,56,22,
                   44,-3,-9,12,17,22,6,11} ;
    printf("The Array before sorting:\n");
    for(i=0;i<16;++i)
        printf("%d  ",array[i]);
      printf("\n");


        void sort(int a[], int n);
        sort(array,16);

    printf("The array aftter sorting:\n");
    for(i=0;i<16;++i)
        printf("%i  ",array[i]);

    printf("\n");
   return 0;
}
