#include<stdio.h>

int main()
{

    long long n, a;

    scanf("%lld",&n);

    for(long long i =0;i<n;i++)
    {N
        scanf("%lld",&a);

        if(a==0)
            printf("NULL\n");

        if(a>0)
        {
            if(a%2==0)
                printf("EVEN POSITIVE\n");
            else printf("ODD POSITIVE\n");
        }

        if(a<0)
            {
            if(a%2==0)
                printf("EVEN NEGATIVE\n");
            else printf("ODD NEGATIVE\n");
        }

    }

    return 0;
}


