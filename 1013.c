#include<stdio.h>
double p = 3.14159;
int main()
{

    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b && a>=c)
        d=a;

    if(b>=a && b>=c)
        d=b;

    if(c>=a && c>=b)
        d=c;

    printf("%d eh o maior\n",d);
    return 0;

}
