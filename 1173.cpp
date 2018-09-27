#include<stdio.h>
int main()
{
    int n,ar[10];

    scanf("%d",&n);
    ar[0]=n;

    for(int i=1;i<10;i++)
    {
        ar[i]=ar[i-1]*2;
    }

    for(int i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,ar[i]);
    }

    return 0;

}
