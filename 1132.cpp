#include<stdio.h>
int main()
{
    int x,y,b,s,sum=0;;
    scanf("%d %d",&x,&y);

    if(x>=y)
    {
        b=x;
        s=y;
    }

    else
    {
        b=y;
        s=x;
    }

    for(int i=s;i<=b;i++)
    {
        if(i%13 !=0)
            sum=sum+i;

    }

    printf("%d\n",sum);
    return 0;

}
