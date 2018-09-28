#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int t;
    while(true)
    {
        scanf("%d",&t);
        if(t==0)
            break;

        int tot=0;
        string s;
        int c;
        for(int i=0;i<t;i++)
        {
            scanf("%d",&c);
            getchar();
            getline(cin,s);


            if(!s.compare("suco de laranja"))
                tot=tot+ c*120;

            if(!s.compare("morango fresco"))
                tot = tot + c *85 ;

            if(!s.compare("mamao"))
                tot = tot + c *85 ;

            if(!s.compare("goiaba vermelha"))
                tot = tot + c * 70;

            if(!s.compare("manga"))
                tot = tot + c * 56;

            if(!s.compare("laranja"))
                tot = tot + c * 50;

            if(!s.compare("brocolis"))
                tot = tot + c * 34;


        }

        if(tot>130)
        {
            //printf("%d %d",tot,c);
            printf("Menos %d mg\n",tot-130);
        }
        else if(tot<110)
        {
            //printf("%d %d",tot,c);
            printf("Mais %d mg\n",110-tot);
        }

        else{
            //printf("%d %d",tot,c);
            printf("%d mg\n",tot);
        }
    }






}

