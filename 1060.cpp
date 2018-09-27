#include<stdio.h>

int main()
{
    double ar[6];
    int c=0;

    for(int i =0;i<6;i++)
    {

        scanf("%lf",&ar[i]);
    }

    for(int i = 0; i<6 ;i++)
    {
        if(ar[i]>0)
            c++;
    }

    printf("%d valores positivos\n",c);

    return 0;

}
