#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


int ar[10000000];
int v[10000000];
int main()
{
    int a,b,c,n,k=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

   /* for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }*/


    for(;;)
    {
        if(k==0 && ar[k]%2==0)
        {
            v[k]=1;
            if(ar[k]!=0)
                ar[k]--;

            break;
        }

        else if(k==n-1 && ar[k]%2!=0)
        {
            v[k]=1;

            if(ar[k]!=0)
                ar[k]--;

            break;
        }

        else if (ar[k]%2==0)
        {
            v[k]=1;

            if(ar[k]!=0)
                ar[k]--;

            k--;
        }

        else if(ar[k]%2!=0)
        {
            v[k]=1;

            if(ar[k]!=0)
                ar[k]--;

            k++;
        }

        //printf("\n%d\n",k);
    }

    long long x=0,y=0;
    for(int i=0;i<n;i++)
    {
        x=x+ar[i];
        y=y+ v[i];
    }

    printf("%lld %lld\n",y,x);




}

