#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int n;
    scanf("%d",&n);
    double sum=0;
    double t=6;
    for(int i=1;i<=n;i++)
    {
        t=1.0/t;

        if(i!=n)
            t=t+6;

    }

    if(n==0)
        sum=3;
    else
    sum=3+t;
    printf("%.10lf\n",sum);






}

