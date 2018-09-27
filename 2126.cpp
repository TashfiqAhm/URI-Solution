#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
int ar[1000];
int ar2[1000];
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        if(ar[i]>ar[i+1])
            ar2[i]=1;
        else
            ar2[i]=0;
    }

    if(ar[n-1]>ar[n-2])
        ar2[n-1]=1;
    else
        ar2[n-1]=0;


    int f=1;
    for(int i=1; i<n; i++)
    {
        if(ar2[i]==ar2[i-1])
        {
            f=0;
            break;
        }
    }

//    for(int i=0;i<n;i++)
//    {
//        printf("%d  ",ar2[i]);
//    }
//    printf("\n");

    printf("%d\n",f);

    return 0;





}

