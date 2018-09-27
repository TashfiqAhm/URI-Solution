#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int n;
    ull t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%llu",&t);

        if(t<2015)
            printf("%llu D.C.\n",2015-t);

        else printf("%llu A.C.\n",t-2014);
    }

    return 0;





}

