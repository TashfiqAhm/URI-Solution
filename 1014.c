#include<stdio.h>
double p = 3.14159;
int main()
{

    int a;
    double x,y;

    scanf("%d %lf",&a,&x);

    y = a/x;

    printf("%.3lf km/l\n",y);
    return 0;
}
