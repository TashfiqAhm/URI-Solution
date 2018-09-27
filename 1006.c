#include<stdio.h>

int main()
{

    double a,b,c,d,e;
    scanf("%lf %lf %lf",&a,&b,&c);

    d = (a*2 + b*3 + c*5)/10.0;

    printf("MEDIA = %.1lf\n",d);
    return 0;
}
