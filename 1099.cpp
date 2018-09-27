
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x,y,sum=0;

    for(int i = 0; i< n ; i++)
    {
        sum=0;
        scanf("%d%d",&x,&y);

        if(x>=y)
            for(int j=y+1;j<x;j++)
            {
                if(j%2!=0)
                sum=sum+j;

            }
        if(x<y)
            for(int j=x+1;j<y;j++)
            {
                if(j%2!=0)
                sum=sum+j;

            }

            printf("%d\n",sum);
    }

    return 0;
}
