#include<stdio.h>

int main()
{
    int m,n,sum=0;
    int b,s;

    for(;;)
    {
        scanf("%d %d",&m,&n);

        if(m<1 || n<1)
            break;

        sum=0;

        if(m>=n)
        {
            b=m;
            s=n;
        }
        else
        {
            s=m;
            b=n;
        }

        for(int i = s;i<=b;i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);


    }

    return 0;

}
