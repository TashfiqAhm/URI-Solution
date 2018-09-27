#include<stdio.h>

char ar[300];
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        gets(ar);
        getchar();
    }

    printf("Ciencia da Computacao\n");
    return 0;
}
