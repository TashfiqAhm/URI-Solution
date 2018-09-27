#include<stdio.h>
int main()
{
    long long a,b,c,sum=0;

    scanf("%lld %lld",&a,&b);

    if(a<b)
    {


    for(int i = a+1; i<b;i++)
    {
        if(i%2 !=0)
            sum = sum +i;
    }
    }

    else
        {
            for(int i = b+1; i<a;i++)
    {
        if(i%2 !=0)
            sum = sum +i;
    }
        }

    printf("%lld",sum);

    return 0;

}
