#include<stdio.h>
double p = 3.14159;
int main()
{

    double a,b,c,t,c1,tp,s,r;

    scanf("%lf %lf %lf",&a,&b,&c);

    t = .5 *a *c;
    c1 = p*c*c;
    tp = (a+b)*c/2.0;
    s = b*b;
    r = a*b;

    printf("TRIANGULO: %.3lf\n",t);

    printf("CIRCULO: %.3lf\n",c1);

    printf("TRAPEZIO: %.3lf\n",tp);

    printf("QUADRADO: %.3lf\n",s);

    printf("RETANGULO: %.3lf\n",r);

    return 0;
}
