
#include<stdio.h>
int main()
{
    int x;
    for(;;)
    {
        scanf("%d",&x);
        if(x==0)
            break;

        for(int j=1;j<=x;j++)
        {
            printf("%d",j);
            if(j==x)
                printf("\n");
            else printf(" ");
        }



    }

    return 0;
}

