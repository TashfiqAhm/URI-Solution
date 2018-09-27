#include<stdio.h>
int main()
{
    int n,m,mi;
    scanf("%d",&n);

    int ar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    m=ar[0];
    mi=0;

    for(int i=0;i<n;i++)
    {
        if(ar[i]<m)
        {
            m=ar[i];
            mi=i;
        }
    }

    printf("Menor valor: %d\n",m);
    printf("Posicao: %d\n",mi);
    return 0;


}
