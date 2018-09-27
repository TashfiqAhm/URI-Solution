#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int n;
    string a,b;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        cin>>a>>b;

        if(!a.compare("papel") && !b.compare("papel"))
        {
            printf("Ambos venceram\n");

        }

        if(!a.compare("pedra") && !b.compare("pedra"))
        {
            printf("Sem ganhador\n");

        }

        if(!a.compare("ataque") && !b.compare("ataque"))
        {
            printf("Aniquilacao mutua\n");
        }

        if(!a.compare("ataque") && !b.compare("pedra"))
        {
            printf("Jogador 1 venceu\n");
        }

        if(!a.compare("pedra") && !b.compare("ataque"))
        {
            printf("Jogador 2 venceu\n");
        }

        if(!a.compare("pedra") && !b.compare("papel"))
        {
            printf("Jogador 1 venceu\n");
        }

        if(!a.compare("papel") && !b.compare("pedra"))
        {
            printf("Jogador 2 venceu\n");
        }

        if(!a.compare("papel") && !b.compare("ataque"))
        {
            printf("Jogador 2 venceu\n");
        }

        if(!a.compare("ataque") && !b.compare("papel"))
        {
            printf("Jogador 1 venceu\n");
        }
    }






}
