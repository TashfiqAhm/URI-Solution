#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    double a,b,c,p=0;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==b ||a==c ||b==c)
        printf("S\n");

    else
    {
        double d=(a+b+c)/2.0;
        if(d==a || d==b || d==c)
            p=1;

        if(p==0)
            printf("N\n");
        else printf("S\n");
    }





}

