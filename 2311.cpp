
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#include<stdio.h>
#include<stdlib.h>

double dif ,ar[100];
void marge(int f, int q, int l)
{
    int i,j,k;

    int n1 = q - f +1;
    int n2 = l-q;

    double L[n1],R[n2];

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
    int n;

    double tot;



    scanf("%d",&n);
    //tring s;
    char ar2[1000];

    for(int i=0;i<n;i++)
    {
        scanf("%s",ar2);
        //cin>>s;
        scanf("%lf",&dif);

        for(int j=0;j<7;j++)
        {
            scanf("%lf",&ar[j]);
        }

        marge_sort(0,6);

        tot=0;
        for(int j=1;j<6;j++)
        {
            tot=tot+ar[j];
        }

        tot= tot*dif;

        printf("%s",ar2);
        //cout<<s;
        printf(" %.2lf\n",tot);



    }







}
