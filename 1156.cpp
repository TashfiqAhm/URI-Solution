#include<stdio.h>
int main()
{
    double s=0;
    for(int i=1,j=1;i<=39;i=i+2,j=j*2)
    {
        s=s+ (i*1.0)/j;
    }

    printf("%.2lf\n",s);
    return 0;
}
