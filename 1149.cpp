#include<stdio.h>
int main()
{
    int a,n=-1,sum=0;
    scanf("%d",&a);
    while(n<1)scanf("%d",&n);
    for(int i = 0 ; i<n; i++)sum=sum+a+i;
    printf("%d\n",sum);
}


