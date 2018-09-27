#include<stdio.h>


int main()
{

    int a,b,c,temp;
    int ar[3];

    scanf("%d %d %d",&a,&b,&c);

    ar[0]=a;
    ar[1]=b;
    ar[2]=c;

    for(int i = 0 ; i <3-1 ; i++)
        for(int j = 0 ; j<3-i-1 ; j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j+1];
                ar[j+1] = ar[j];
                ar[j]=temp;
            }

        }

    printf("%d\n",ar[0]);
    printf("%d\n",ar[1]);
    printf("%d\n",ar[2]);
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);




}
