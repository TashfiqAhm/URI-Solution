#include<stdio.h>

int main()
{

    int n,c=0;
    scanf("%d",&n);

    for(int i = n ;;i++)
    {
        if(i%2 !=0)
            {
                printf("%d\n",i);
                c++;
            }
        if(c==6)
            break;
    }

    return 0;


}

