#include<stdio.h>
int main()
{
    long long ar[61];
    int a1=0,a2=1;
    ar[0]=a1;
    ar[1]=a2;

    for(int i=2;i<=60;i++)
    {
        ar[i]=ar[i-1]+ar[i-2];

    }

    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("Fib(%d) = %lld\n",n,ar[n]);

    }


    return 0;

}
