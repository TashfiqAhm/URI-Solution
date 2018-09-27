#include<stdio.h>

int main()
{

    double ar[6],sum=0,avg;
    int c=0;

    for(int i = 0; i< 6; i++)
    {
        scanf("%lf",&ar[i]);
    }

    for(int i = 0 ; i<6; i++)
    {
        if(ar[i]>=0)
        {

            sum=sum+ar[i];
            c++;


        }
    }

    avg= sum/(c*1.0);

    printf("%d valores positivos\n",c);
    printf("%.1lf\n",avg);
    return 0;

}
