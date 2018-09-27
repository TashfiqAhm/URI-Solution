#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int p=30,m,o;

    for(int i =1;i<=n;i++)
    {
        scanf("%d",&m);
        if(p>m)
        {
            p=m;
            o=i;

        }
    }
    printf("%d\n",o);
    return 0;

}
