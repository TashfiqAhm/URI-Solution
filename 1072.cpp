#include<stdio.h>
int main()
{
    int n ,c=0,a;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>=10 &&  a<=20)
            c++;

    }

    printf("%d in\n",c);
    printf("%d out\n",n-c);

    return 0;
}
