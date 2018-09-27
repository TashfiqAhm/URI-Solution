#include<stdio.h>
#include<math.h>
int main()
{
    int pa,pb,sum1=0,sum2=0;
    double g1,g2;
    int t;

    scanf("%d",&t);

    for(int i = 0 ;i < t ;i++)
    {
        scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);

        int j;

        for(j=1;;j++)
        {
            pa = pa * (1+ (g1*1.0)/100);
            pb = pb * (1+ (g2*1.0)/100);


            if(pa>pb)
            {
                break;
            }

            if(j>100)
            {
                break;
            }

        }

        if(j<=100)
        {
            printf("%d anos.\n",j);
        }
        else
            printf("Mais de 1 seculo.\n");






    }
    return 0;
}
