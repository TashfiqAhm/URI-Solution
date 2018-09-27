#include<stdio.h>
int ar[100][100];
int main()
{
    int n,op,tp;

    while(scanf("%d",&n) != EOF)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            ar[i][j]=3;

        op=0;
        tp=n-1;

        for(int i=0;i<n;i++)
        {
            ar[i][op]=1;
            ar[i][tp]=2;

            op++;
            tp--;

        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d",ar[i][j]);
            }
            printf("\n");
        }







    }
    return 0;
}
