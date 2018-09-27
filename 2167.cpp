#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int ar[1000];
int main()
{

    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int g=0;

    for(int i=1;i<n;i++)
    {
        if(ar[i]<ar[i-1])
        {
            g=i+1;
            break;
        }
    }
    printf("%d\n",g);






}

