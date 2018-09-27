
#include<stdio.h>
char n[200],n2[200],c[200],c2[200];
int main()

{

    int t,a,b,r;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%s %s %s %s",n,c,n2,c2);
        scanf("%d %d",&a,&b);


        r=a+b;

        if(r%2==0)
        {
            if(c[0]=='P')
                printf("%s\n",n);
            else printf("%s\n",n2);
        }

        if(r%2!=0)
        {
            if(c[0]=='I')
                printf("%s\n",n);
            else printf("%s\n",n2);
        }


    }

    return 0;
}
