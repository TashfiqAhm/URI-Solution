#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
int ar[2000][2000];
int main()
{
    queue<int>q;

    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d",&ar[i][j]);

            if(ar[i][j]==42)
            {
                q.push(i);
                q.push(j);
            }
        }
    }
    int x=0,y=0,f=0,c=0;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        y=q.front();
        q.pop();

        int c=0;

        if(x>0 &&y>0 && x<n &&y<m)
        {

        }
        if(ar[x-1][y-1]==7)
            c++;
        if(ar[x-1][y]==7)
            c++;
        if(ar[x-1][y+1]==7)
            c++;
        if(ar[x][y-1]==7)
            c++;
        if(ar[x][y+1]==7)
            c++;
        if(ar[x+1][y-1]==7)
            c++;
        if(ar[x+1][y]==7)
            c++;
        if(ar[x+1][y+1]==7)
            c++;

        if(c==8)
        {
            f=1;
            break;
        }
        x=0;
        y=0;

    }
    if(f==1)
    printf("%d %d\n",x,y);
    else printf("0 0\n");
    return 0;





}

