#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int ar[200][200];

int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        memset(ar,0,sizeof(ar));

        for(int i = 0;i<n;i++)
        {
                ar[i][i]=2;
                ar[i][n-1-i]=3;
        }

        for(int i=n/3;i<n-n/3;i++)
        {
            for(int j=n/3;j<n-n/3;j++)
            {
                ar[i][j]=1;
            }
        }
        ar[n/2][n/2]=4;



        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d",ar[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }

}
