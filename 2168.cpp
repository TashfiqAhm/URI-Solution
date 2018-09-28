
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
int ar[1000][1000];

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%d",&ar[i][j]);
        }

    }

    for(int i=1;i<=n;i++)
    {

        for(int j =1;j<=n;j++)
        {
            if(ar[i][j]+ar[i-1][j]+ar[i-1][j-1]+ar[i][j-1]>=2)
                printf("S");
            else printf("U");
        }
        printf("\n");
    }








}
