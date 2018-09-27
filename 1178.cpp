#include<stdio.h>
int main()
{

    double n,ar[100];
    scanf("%lf",&ar[0]);

    for(int i=1;i<100;i++)
    {
        ar[i]=ar[i-1]/2.0;
    }

    for(int i=0;i<100;i++)
    {
        printf("N[%d] = %.4lf\n",i,ar[i]);
    }
    return 0;




}
