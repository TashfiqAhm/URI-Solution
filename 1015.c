#include<stdio.h>
#include<math.h>

double p = 3.14159;
int main()
{

    double x1,y1,x2,y2,res;

    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

    res= sqrt((x2 - x1)*(x2 - x1) + (y2-y1)*(y2-y1));

    printf("%.4lf\n",res);
    return 0;
}
