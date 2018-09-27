#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int t=1,n;
    int a;
    scanf("%d",&t);
    while(t)
    {

        for(int i=0;i<t;i++)
        {
            scanf("%d",&a);

            if(a%2==0)
            {
                a--;
                a--;
                a=a*2+2;
                printf("%d\n",a);
            }
            else
                {
                    a--;
                    a=a*2 +1;
                    printf("%d\n",a);
                }
        }


        scanf("%d",&t);
    }






}

