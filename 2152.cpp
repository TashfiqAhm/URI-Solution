#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int h,m,o,t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&h,&m,&o);

        if(h<10)
            printf("0%d:",h);
        else printf("%d:",h);

        if(m<10)
            printf("0%d - ",m);
            else printf("%d - ",m);

        if(o==1)
            printf("A porta abriu!\n");
        else printf("A porta fechou!\n");
    }




}

