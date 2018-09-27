#include<stdio.h>
int main()
{

    double a=0,b,d,sum=0;;
    int c=0;

    for(;;)
    {
        scanf("%lf",&a);
        if(a<0)
            break;
        else
            {
                sum=sum+a;
                c++;


            }
    }

    b=(sum*1.0)/c;

    printf("%.2lf\n",b);
    return 0;



}
