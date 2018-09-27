#include<stdio.h>
int main()
{
    int x,y,b,s;

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

    for(int i = s+1; i<b;i++)
    {
        if(i%5==2 ||i%5==3)
            printf("%d\n",i);

    }

    return 0;

}
