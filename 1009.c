
#include<stdio.h>

int main()

{

    char n[100];
    double a,b,c,d;

    gets(n);
    scanf("%lf %lf",&a,&b);

    c = a + b*.15;
    printf("TOTAL = R$ %.2lf\n",c);
    return 0;
}
