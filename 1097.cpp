#include<stdio.h>
int main()
{
    int i,j;
    for(i=1,j=7;i<=9;i++)
    {
        if(i%2!=0)
        {
            printf("I=%d J=%d\n",i,j);
            printf("I=%d J=%d\n",i,j-1);
            printf("I=%d J=%d\n",i,j-2);
            j=j+2;
        }




    }
    return 0;
}
