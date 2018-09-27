#include<stdio.h>

int odd[5];
int even[5];
int main()
{
    int a,ec=-1,oc=-1;

    for(int i=0;i<15;i++)
    {
        scanf("%d",&a);

        if(a%2==0)
        {
            ec++;
            even[ec]=a;

        }

        else
            {
                oc++;
                odd[oc]=a;

            }
        if(ec==4)
        {
            for(int j=0;j<=ec;j++)
                printf("par[%d] = %d\n",j,even[j]);
            ec=-1;
        }

        if(oc==4)
        {
            for(int j=0;j<=oc;j++)
                printf("impar[%d] = %d\n",j,odd[j]);
            oc=-1;
        }

    }

    for(int j=0;j<=oc;j++)
                printf("impar[%d] = %d\n",j,odd[j]);

    for(int j=0;j<=ec;j++)
                printf("par[%d] = %d\n",j,even[j]);


                return 0;

}
