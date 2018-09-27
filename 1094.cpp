#include<stdio.h>
int main()
{

    int n,t;
    int sum=0,c=0,r=0,s=0;
    char c3;

    double c1,r1,s1;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&t,&c3);

        sum = sum +t;

        if(c3== 'C')
            c=c+t;

        if(c3== 'R')
            r=r+t;
        if(c3== 'S')
            s=s+t;


    }

    c1= c/(sum*1.0) *100.00;
    r1= r/(sum*1.0) *100.00;
    s1= s/(sum*1.0) *100.00;

    printf("Total: %d cobaias\n",sum);

    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %%\n",c1);
    printf("Percentual de ratos: %.2lf %%\n",r1);
    printf("Percentual de sapos: %.2lf %%\n",s1);

    return 0;





}
