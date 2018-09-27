#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t=0;
    int sum=0;
    char ar[100];

    for(int i=0;i<3;)
    {
        scanf("%s",ar);
        if(ar[0]=='c')
            {
                scanf("%s",ar);
                printf("%d\n",sum);
                i++;
                sum=0;
            }

        else
        {
            if(ar[0]=='*')
            sum=sum + 4;

            if(ar[1]=='*')
            sum=sum + 2;

            if(ar[2]=='*')
            sum=sum + 1;

        }
    }
}
