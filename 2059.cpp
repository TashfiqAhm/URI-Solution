#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    int p,j1,j2,r,a,win;
    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);

    if(r==1 && a==1)
        win=2;

    else if(r==1 && a==0)
        win=1;

    else if(r==0 && a==1)
        win=1;
    else
    {
        int res= j1+j2;

        if(res%2==0)
        {
            if(p==1)
                win=1;
            else win = 2;
        }
        else
        {
            if(p==1)
                win=2;
            else win =1;
        }
    }

    if(win==2)
        printf("Jogador 2 ganha!\n");
            else printf("Jogador 1 ganha!\n");





}
