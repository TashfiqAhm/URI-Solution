#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    double a;
    scanf("%lf",&a);
    double r1,r2;
    r1= a/log(a);

    r2= r1*1.25506;

    printf("%.1lf %.1lf\n",r1,r2);
    return 0;




}

