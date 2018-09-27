#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int n,p,q;
    double sum=0;

    scanf("%d",&n);


    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
         if(p==1001)
            sum=sum+1.50*q;

         if(p==1002)
            sum=sum+2.50*q;

            if(p==1003)
            sum=sum+3.50*q;

            if(p==1004)
            sum=sum+4.50*q;

            if(p==1005)
            sum=sum+5.50*q;

    }

    printf("%.2lf\n",sum);



}

