#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    int h,m;
    while(scanf("%d",&h) !=EOF)
    {
        scanf(":%d",&m);
        int res;

        if(h>=7 && m>=0)
        {

            res=(h-7)*60 + m;
        }
        if(h<7)
            res=0;

        printf("Atraso maximo: %d\n",res);
    }


    return 0;







}

