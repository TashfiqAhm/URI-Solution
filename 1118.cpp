#include<stdio.h>
int main()
{

    double x,y,sum=0;
    int c=5;

    for(;;)
    {
        sum=0;
        c=5;

        for(int i=0; i<2;)
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




        while( c!=1 && c!=2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&c);
        }

        if(c==2)
            break;










    }

    return 0;




}

