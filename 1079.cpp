#include<stdio.h>
int main()
{

    int n;
    double a,b,c,res;

    scanf("%d",&n);

    for(int i = 0;i<n;i++)
    {
            scanf("%lf%lf%lf",&a,&b,&c);
            res= a*2 + b*3 +c*5;
            printf("%.1lf\n",res/10.0);


    }

    return 0;
}
