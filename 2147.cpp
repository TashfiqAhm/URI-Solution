#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int t;
    int time=0;
    int g,a,l,o,p,e,i,r;
    char ar[100000];
    scanf("%d",&t);
    for(int u=0;u<t;u++)
    {
        g=0;a=0;l=0;o=0;p=0;e=0;i=0;r=0;
        time=0;
        scanf("%s",ar);
        int len = strlen(ar);

        for(int j=0;j<len;j++)
        {
            if(ar[j]=='g')
                g++;
            if(ar[j]=='a')
                a++;

            if(ar[j]=='l')
                l++;

                if(ar[j]=='o')
                o++;

                if(ar[j]=='p')
                p++;

                if(ar[j]=='e')
                e++;

                if(ar[j]=='i')
                i++;

                if(ar[j]=='r')
                r++;


        }

        int sum=0;

        if(g>=1)
            sum=sum+g;

        if(a>=2)
            sum=sum+a;

        if(l>=1)
            sum=sum+l;

        if(o>=1)
            sum=sum+o;

        if(p>=1)
            sum=sum+p;

        if(e>=1)
            sum=sum+e;

        if(i>=1)
            sum=sum+i;

        if(r>=1)
            sum=sum+r;

        printf("%.2lf\n",sum*0.01);







    }








}

