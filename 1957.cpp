#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll num;
    scanf("%lld",&num);
    ll rem,res;
    stack<int> q;

    while(num!=0)
    {
        rem=num%16;
        res=num/16;
        num=res;
        q.push(rem);

    }

    while(!q.empty())
    {
        if(q.top()<10)
            printf("%d",q.top());

        if(q.top()==10)
            printf("A");

        if(q.top()==11)
            printf("B");
        if(q.top()==12)
            printf("C");

        if(q.top()==13)
            printf("D");

        if(q.top()==14)
            printf("E");

        if(q.top()==15)
            printf("F");

        q.pop();
    }

    printf("\n");




}

