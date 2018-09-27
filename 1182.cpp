
#include<stdio.h>
double ar[12][12];
int main()
{

    int n;
    char c;
    double sum=0;
    scanf("%d %c",&n,&c);

    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
            {
                scanf("%lf",&ar[i][j]);

            }


     for(int j=0;j<12;j++)
            {
                sum=sum+ar[j][n];

            }
            double avg=sum/12.0;


        if(c=='S')
            printf("%.1lf\n",sum);
        else
             printf("%.1lf\n",avg);

        return 0;






}
