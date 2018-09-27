#include<stdio.h>
int main()
{

    int x,a=1;
    scanf("%d",&x);

    for(int i=0;i<x;i++)
    {

        printf("%d %d %d PUM\n",a,a+1,a+2);
        a=a+4;;


    }
    return 0;
}
