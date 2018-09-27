#include<stdio.h>


int main()
{
    int ar[5],c=0;

    for(int i = 0 ; i < 5; i++)
    {
        scanf("%d",&ar[i]);
    }


    for(int i = 0 ; i < 5; i++)
    {
        if(ar[i]%2==0)
            c++;
    }

    printf("%d valores pares\n",c);
    return 0;
}
N
