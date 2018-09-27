#include<stdio.h>
int  main()
{
    int x;


    for(;;)
    {
        scanf("%d",&x);
        if(x==0)
            break;
            int sum=0;
        for(int i=x,c=1;c<=5;i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
                c++;
            }
        }

        printf("%d\n",sum);
    }

    return 0;
}
