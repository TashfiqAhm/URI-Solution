#include<stdio.h>
double p = 3.14159;
int main()
{

    double r,s;

    scanf("%lf",&r);
    s= 4*p*r*r*r/3.0;
    printf("VOLUME = %.3lf\n",s);
    return 0;
}
