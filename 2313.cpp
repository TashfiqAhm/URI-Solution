#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int ar[4];

void marge(int f, int q, int l)
{
    int i,j,k;

    int n1 = q - f +1;
    int n2 = l-q;

    int L[n1],R[n2];

    for(i=0;i<n1;i++)
    {
        L[i] = ar[f+i];
    }

    for(j=0;j<n2;j++)
    {
        R[j] = ar[q+1+j];
    }

    i=0;
    j=0;
    k=f;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            ar[k] = L[i];
            i++;
        }

        else
        {
            ar[k] = R[j];
            j++;
        }

        k++;
    }

    while(i<n1)
    {
        ar[k] = L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        ar[k] = R[j];
        j++;
        k++;
    }
}

void marge_sort(int f , int l)
{
    int q;
    if(f<l)
    {
        q = (f+l)/2;
        marge_sort(f,q);
        marge_sort(q+1,l);

        marge(f,q,l);
    }
}

int main()
{
    scanf("%d %d %d",&ar[0],&ar[1],&ar[2]);
    marge_sort(0,2);

    if(ar[0]+ar[1]<=ar[2])
        printf("Invalido\n");

    else
    {
        if(ar[0]==ar[1] && ar[1]==ar[2])
            printf("Valido-Equilatero\n");
        else if(ar[0]!=ar[1] && ar[1]!=ar[2])
            printf("Valido-Escaleno\n");
        else printf("Valido-Isoceles\n");

        if(ar[0]*ar[0] +ar[1]*ar[1] ==ar[2]*ar[2])
        {
            printf("Retangulo: S\n");
        }
        else  printf("Retangulo: N\n");

    }








}

