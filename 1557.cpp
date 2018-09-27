#include<stdio.h>

long long ar[15][15];
int main()
{
    ar[0][0]=1;

    for(int i=1; i<15; i++)
        ar[i][0]= ar[i-1][0]*2;

    for(int i=0; i<15; i++)
    {
        for(int j=1; j<15; j++)
        {
            ar[i][j]=ar[i][j-1]*2;
        }
    }

    int n;

    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
            break;



        if(n==1 || n==2)
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(j!=0)
                        printf(" ");
                    printf("%lld",ar[i][j]);
                }
                printf("\n");

            }

        if(n==3 || n==4)
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(j!=0)
                        printf(" ");
                    printf("%2lld",ar[i][j]);
                }
                printf("\n");

            }
        if(n==5)
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(j!=0)
                        printf(" ");
                    printf("%3lld",ar[i][j]);
                }
                printf("\n");

            }
        if(n==6 || n==7)
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(j!=0)
                        printf(" ");
                    printf("%4lld",ar[i][j]);
                }
                printf("\n");

            }
        if(n==8 || n==9)
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(j!=0)
                        printf(" ");
                    printf("%5lld",ar[i][j]);
                }
                printf("\n");

            }
        if(n==10)
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(j!=0)
                        printf(" ");
                    printf("%6lld",ar[i][j]);
                }
                printf("\n");

            }
        if(n==11 || n==12)
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(j!=0)
                        printf(" ");
                    printf("%7lld",ar[i][j]);
                }
                printf("\n");

            }
        if(n==13 || n==14)
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(j!=0)
                        printf(" ");
                    printf("%8lld",ar[i][j]);
                }
                printf("\n");

            }
        if(n==15)
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(j!=0)
                        printf(" ");
                    printf("%9lld",ar[i][j]);
                }
                printf("\n");

            }




        printf("\n");
    }

    return 0;

}
