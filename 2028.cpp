#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int n,i=0;
    int t;
    while(scanf("%d",&n)!=EOF)
    {
        i++;
        t=n*(n+1);
        t=t/2 +1;

        if(t==1)
            {
                printf("Caso %d: 1 numero\n",i);
                printf("0");
            }

        else
        {
            printf("Caso %d: %d numeros\n",i,t);
            printf("0");
        }


        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=j;k++)
                printf(" %d",j);

        }

        printf("\n\n");
    }






}
