#include<stdio.h>
int main()
{

    int ar[100],h,p;

    scanf("%d",&ar[0]);
    h=ar[0];
    p=1;

    for(int i=1;i<100;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>h)
          {
              h=ar[i];
              p=i+1;
          }

    }

    printf("%d\n",h);
    printf("%d\n",p);
}
