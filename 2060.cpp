#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    int n;
    int ar[10000];

    scanf("%d",&n);

    int n2=0,n3=0,n4=0,n5=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
            n2++;

        if(ar[i]%3==0)
            n3++;

        if(ar[i]%4==0)
            n4++;

        if(ar[i]%5==0)
            n5++;
    }

    printf("%d Multiplo(s) de 2\n",n2);
    printf("%d Multiplo(s) de 3\n",n3);
    printf("%d Multiplo(s) de 4\n",n4);
    printf("%d Multiplo(s) de 5\n",n5);




}
