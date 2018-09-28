#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    char st[10000];

    ll n,s,b,a,sa,ba,aa;
    ll ser=0,bl=0,att=0;
    ll ser_=0,bl_=0,att_=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%s",st);


        scanf("%lld %lld %lld %lld %lld %lld",&s,&b,&a,&sa,&ba,&aa);

        ser= ser + s;
        bl= bl+b;
        att = att+a;
        ser_= ser_ + sa;
        bl_ = bl_ + ba;
        att_ = att_ + aa;

    }

    double sres,bres,ares;

    sres= ((ser_*1.00)/ser)*100;
    bres= ((bl_*1.00)/bl)*100;
    ares= ((att_*1.00)/att)*100;


    printf("Pontos de Saque: %.2lf %%.\n",sres);
    printf("Pontos de Bloqueio: %.2lf %%.\n",bres);
    printf("Pontos de Ataque: %.2lf %%.\n",ares);





}

