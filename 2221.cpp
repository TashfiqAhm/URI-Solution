#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int t,a,b,d,p1,p2;
    double v1,v2;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d",&b);

        scanf("%d %d %d",&a,&d,&p1);
        if(p1%2==0)
        v1= (a+d)/2.0 +b;
        else v1= (a+d)/2.0;

        scanf("%d %d %d",&a,&d,&p2);
        if(p2%2==0)
        v2= (a+d)/2.0 +b;
        else v2= (a+d)/2.0;

        if(v1>v2)
            printf("Dabriel\n");
        if(v1<v2)
            printf("Guarte\n");
        if(v1==v2)
            printf("Empate\n");

    }






}

