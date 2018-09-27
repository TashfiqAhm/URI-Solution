#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    int n;
    scanf("%d",&n);

    double sum=0,t=2;

    for(int i=1;i<=n;i++)
    {
        t=1.0/t;
        if(i!=n)
        t=t+2;
    }

    if(n==0)
        sum=1;
    else sum=1+t;

    printf("%.10lf\n",sum);




}

