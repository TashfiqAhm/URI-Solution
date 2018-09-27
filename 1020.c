#include<stdio.h>

int main()
{

    int a,b,c,d,e,f;

    scanf("%d",&a);

    d=a/365;
    a=a%365;

    c=a/30;
    a=a%30;

    printf("%d ano(s)\n",d);
    printf("%d mes(es)\n",c);
    printf("%d dia(s)\n",a);
    return 0;

}
