#include<stdio.h>
double ar[12][12];
int main()
{

    char c;
    double sum=0;
    scanf("%c",&c);
    int temp=1;

    for(int i=0; i<12; i++)
        for(int j=0; j<12; j++)
        {
            scanf("%lf",&ar[i][j]);

        }

    for(int i=11; i>-1; i--)
    {


        for(int j=temp; j<12; j++)
        {
            sum=sum+ar[i][j];

        }
        temp++;


    }
    double avg=sum/66.0;

    if(c=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",avg);

    return 0;








}

