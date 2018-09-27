#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int p,n,ar[1000];
    scanf("%d %d",&p,&n);

    for(int i=0;i<n;i++)
        scanf("%d",&ar[i]);

    int i,j=0;
    for(i=1;i<n;i++)
    {
        int t;
        if(ar[i]>ar[i-1])
            t = ar[i]-ar[i-1];
        else t= ar[i-1]-ar[i];

        if(t<=p)
        j++;

    }

    if(j==n-1)
        printf("YOU WIN\n");
    else printf("GAME OVER\n");








}
