#include<stdio.h>
double ar[12][12];
int main()
{

    char c;
    double sum=0;
    scanf("%c",&c);
    int ji=1,jf=11;

    for(int i=0; i<12; i++)
        for(int j=0; j<12; j++)
        {
            scanf("%lf",&ar[i][j]);

        }

    for(int i=11; i>6; i--)
    {


        for(int j=ji; j<jf; j++)
        {
            sum=sum+ar[i][j];

        }
        ji++;
        jf--;

    }
    double avg=sum/30.0;

    if(c=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",avg);

    return 0;








}


