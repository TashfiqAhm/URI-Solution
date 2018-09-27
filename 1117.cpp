#include<stdio.h>
int main()
{

    double x,y,sum=0;

    for(int i=0;i<2;)
    {
        scanf("%lf",&x);
        if(x<0||x>10)
            printf("nota invalida\n");
        else
        {
            sum=sum+x;
            i++;
        }
    }

    y=sum/2.0;

    printf("media = %.2lf\n",y);

    return 0;




}

