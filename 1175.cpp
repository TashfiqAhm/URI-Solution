#include<stdio.h>
int main()
{
    int ar[20];

    for(int i=0;i<20;i++)
        scanf("%d",&ar[i]);

    for(int i=0,j=19;i<=9;i++,j--)
    {
        int temp;
        temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
    }

    for(int i=0;i<20;i++)
        printf("N[%d] = %d\n",i,ar[i]);

        return 0;




}
