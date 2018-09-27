#include<stdio.h>

int main()
{

    int a,b,c,d,e,f;

    scanf("%d",&a);

    d=a/3600;
    a=a%3600;

    c=a/60;
    a=a%60;

    printf("%d:%d:%d\n",d,c,a);
    return 0;

}
