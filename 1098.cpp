#include<stdio.h>
int main()
{
    double i , j ;


    for(i=0.0 ; i<=2.0;i=i+.2)
        for(j=1.0;j<=3;j++)
    {
        if((i>1.1 && i<1.9) || (i>0.1 && i<.9))
            printf("I=%.1lf J=%.1lf\n",i,i+j);
        else printf("I=%.0lf J=%.0lf\n",i,i+j);

    }


    return 0;

}
