#include<stdio.h>
int main()
{

    double x,y,z;

    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%lf %lf",&x,&y);

        if(y==0)
            printf("divisao impossivel\n");

        else
        {
            z=(x*1.0)/y;

            printf("%.1lf\n",z);
        }

    }

    return 0;
}
