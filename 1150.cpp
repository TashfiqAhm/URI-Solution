#include<stdio.h>
int main()
{

    int x,z,c=0,sum=0;

    scanf("%d",&x);

    do
    {
        scanf("%d",&z);
    }while(z<=x);



    for(int i = x;;i++)
    {
        sum=sum+i;

        c++;
        if(sum>z)
            break;

    }

    printf("%d\n",c);
    return 0;





}
