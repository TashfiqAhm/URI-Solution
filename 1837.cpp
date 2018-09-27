
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    int a,b,q,r;

    scanf("%d %d",&a,&b);


    for(int i=-1000;i<1000;i++)
    {
        if(b*i<=a)
        {
            r=a- (b*i);

            if(r>=0 && r< abs(b))
            {
                q=i;
                break;
            }

        }
    }

    printf("%d %d\n",q,r);



    return 0;
}
