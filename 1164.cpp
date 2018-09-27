#include<stdio.h>
int main()
{
    int t,a;
    scanf("%d",&t);

    for(int i=0 ; i<t;i++)
    {
        scanf("%d",&a);
        int sum=0;
        for(int j=a-1;j>0;j--)
        {
            if(a%j==0)
                {
                    sum=sum+j;

                }

        }
        if(sum==a)

            printf("%d eh perfeito\n",a);
        else printf("%d nao eh perfeito\n",a);


    }
    return 0;

}
