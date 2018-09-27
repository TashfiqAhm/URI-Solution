#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    double r5= sqrt(5);

    int n;
    scanf("%d",&n);

    double res = (pow((1+r5)/2.0,n) - pow((1-r5)/2.0,n))/r5;

    printf("%.1lf\n",res);

    return 0;





}

