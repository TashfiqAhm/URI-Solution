#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    int n,m;
    scanf("%d %d",&n,&m);
    int tab=n;
    string s;

    for(int i=0;i<m;i++)
    {
        cin>>s;
        if(!s.compare("fechou"))
        {

                tab++;

        }

        else
        {
            if(tab!=0)
                tab--;

        }


    }

    printf("%d\n",tab);




}

