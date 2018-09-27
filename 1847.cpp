#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    //while(1)
    {
        int a,b,c,r;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && b<=c)
        r=1;

    if(a<b && b>=c)
        r=0;

    if(b>a && c>b && (b-a)>(c-b))
        r=0;

    if(b>a && c>b && (b-a)<=(c-b))
        r=1;

    if(b<a && c<b && (b-c)<(a-b))
        r=1;

    if(b<a && c<b && (b-c)>=(a-b))
        r=0;

    if(a==b )
    {
        if(c>b)
            r=1;
        else r=0;
    }

    if(r==1)
        printf(":)\n");
    else
        printf(":(\n");
    }


    return 0;
}
