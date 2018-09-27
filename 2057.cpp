#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int s,t,f;

    scanf("%d %d %d",&s,&t,&f);

    int res = (s+t+f)%24;

    if(res<0)
        res=24+res;

    printf("%d\n",res);





}

