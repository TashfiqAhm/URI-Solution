#include<stdio.h>
int main()
{
    int n,l,m,h;

    while(scanf("%d",&n)!=EOF)
    {
        h=-1;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&m);
            if(m>h)
                h=m;
        }

        if(h<10)
            printf("1\n");
        if(h>=10 && h<20)
            printf("2\n");
            if(h>=20)
            printf("3\n");
    }
    return 0;
}
