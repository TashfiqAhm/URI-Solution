#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    double xf,yf,xi,yi,v,r1,r2;
    while(scanf("%lf",&xf)!=EOF)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&yf,&xi,&yi,&v,&r1,&r2);

        double dis =sqrt(   (xf-xi) * (xf-xi) * 1.0 + (yf-yi)*(yf-yi)*1.0 );

        dis= dis + v*1.5;
        double r = r1+r2;
        if(dis<=r)
            printf("Y\n");
        else printf("N\n");




    }





}

