
#include<stdio.h>
int main()
{
    int n;
    int ar[1000];

    scanf("%d",&n);

    for(int i=0,j=0;i<1000;i++)
    {
        ar[i]=j;
        j++;
        if(j>=n)
            j=0;
    }

    for(int i=0,j=0;i<1000;i++)
    {
        printf("N[%d] = %d\n",i,ar[i]);
    }

    return 0;
}
