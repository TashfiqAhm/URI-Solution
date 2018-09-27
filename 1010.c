
#include<stdio.h>

int main()

{

    int a1,b1,a2,b2,c,d,e;
    double p1,p2,q,r,s;

    scanf("%d %d %lf",&a1,&b1,&p1);
    scanf("%d %d %lf",&a2,&b2,&p2);

    r = b1 * p1 +b2 * p2;
    printf("VALOR A PAGAR: R$ %.2lf\n",r);
}
