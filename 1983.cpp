#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef struct st st;
struct st
{
    int reg;
    double note;
}ar[1000];

void marge(int f, int q, int l)
{
    int i,j,k;

    int n1 = q - f +1;
    int n2 = l-q;

    st L[n1],R[n2];

    for(i=0;i<n1;i++)
    {
        L[i].reg = ar[f+i].reg;
        L[i].note = ar[f+i].note;

    }

    for(j=0;j<n2;j++)
    {
        R[j].reg = ar[q+1+j].reg;
        R[j].note = ar[q+1+j].note;
    }

    i=0;
    j=0;
    k=f;

    while(i<n1 && j<n2)
    {
        if(L[i].note <= R[j].note)
        {
            ar[k].note = L[i].note;
            ar[k].reg  = L[i].reg;
            i++;
        }

        else
        {
            ar[k].note = R[j].note;
            ar[k].reg = R[j].reg;
            j++;
        }

        k++;
    }

    while(i<n1)
    {
        ar[k].note = L[i].note;
        ar[k].reg  = L[i].reg;
        i++;
        k++;
    }

    while(j<n2)
    {
        ar[k].note = R[j].note;
        ar[k].reg = R[j].reg;
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
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d %lf",&ar[i].reg,&ar[i].note);
    }

    marge_sort(0,n-1);


    if(ar[n-1].note>=8.0)
        printf("%d\n",ar[n-1].reg);

    else printf("Minimum note not reached\n");

    return 0;











}

