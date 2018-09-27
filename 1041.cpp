#include<stdio.h>

int main()
{
    double p1,p2;
    scanf("%lf %lf",&p1,&p2);

    if(p1==0 && p2==0)
        printf("Origem\n");

    else if(p1==0)
        printf("Eixo Y\n");

    else if(p2==0)
        printf("Eixo X\n");

    else if(p1>0 && p2>0)
        printf("Q1\n");

    else if(p1<0 && p2>0)
        printf("Q2\n");

    else if(p1<0 && p2<0)
        printf("Q3\n");

    else if(p1>0 && p2<0)
        printf("Q4\n");

        return 0;


}
