#include<stdio.h>
int main()
{
    int t;
    int x,y;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&x,&y);
        int sum=0;

        for(int j=x,c=1;c<=y;j++)
        {
            if(j%2 !=0 )
                {
                    sum=sum+j;
                    c++;
                }


        }

        printf("%d\n",sum);

    }

    return 0;
}
