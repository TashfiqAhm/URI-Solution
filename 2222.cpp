#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<set>
using namespace std;

//set<int>ar[100000];
//set<int>temp;

int ar[100000][70];

int main()
{
    int t,n,m,p,q,cn,a,b,c;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        memset(ar,0,sizeof(ar));

        for(int j=1;j<=n;j++)
        {
            scanf("%d",&m);

            for(int k=0;k<m;k++)
            {
                scanf("%d",&p);
                ar[j][p]=1;
            }
        }

        scanf("%d",&q);

        for(int j=0;j<q;j++)
        {
            cn=0;
            scanf("%d %d %d",&a,&b,&c);

            if(a==1)
            {
                for(int k=0;k<61;k++)
                {
                    if(ar[b][k]==1 && ar[c][k]==1)
                        cn++;
                }

                printf("%d\n",cn);
            }
            else if(a==2)
            {
                for(int k=0;k<61;k++)
                {
                    if(ar[b][k]==1 || ar[c][k]==1)
                        cn++;


                }
                printf("%d\n",cn);

            }
        }

    }
    return 0;

}
