#include<stdio.h>

int main()
{

    int n;
    scanf("%d",&n);

    int n1=0,n2=1;

    for(int i=1;i<=n;i++)
    {
        printf("%d",n1);
        if(i!=n)
            printf(" ");
            else
                printf("\n");

        int temp=n1+n2;
        n1=n2;
        n2=temp;

    }

    return 0;


}
