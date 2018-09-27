#include<stdio.h>
int main()
{

    int a,t,b,c;
    scanf("%d",&t);
    for(int i = 0 ; i<t;i++)
    {
        scanf("%d",&a);
        int flag=0;
        for(int j=2;j<=a/2;j++)
        {
            if(a%j==0)
                {
                    flag=1;
                    break;
                }
        }

        if(flag==1)
            printf("%d nao eh primo\n",a);
        else printf("%d eh primo\n",a);


    }
    return 0;


}
