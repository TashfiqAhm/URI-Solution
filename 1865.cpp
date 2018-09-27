#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

char ar[1000000];
int n[10000000];

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%s",ar);
        scanf("%d",&n);

        if(!strcmp("Thor",ar))
            printf("Y\n");
        else printf("N\n");
    }

    return 0;

}
