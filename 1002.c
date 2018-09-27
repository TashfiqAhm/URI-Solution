#include<stdio.h>
 double p = 3.14159;
int main(void)
{


    double R;
    double area;

    scanf("%lf",&R);

    area = p *R *R;
    printf("A=%.4lf\n",area);
    return 0;
}
