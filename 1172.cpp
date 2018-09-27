#include<stdio.h>
int main()
{
    int ar[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]<1)
            ar[i]=1;
    }

    for(int i=0;i<10;i++)
    {
        printf("X[%d] = %d\n",i,ar[i]);
    }
    return 0;



}
