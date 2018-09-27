#include<stdio.h>
int ar[100][100];
int main()
{

    int n,lay,st,en,m;

    for(;;)
    {

        scanf("%d",&n);
        if(n==0)
            break;

        lay=n/2;
        if(n%2==1)
            lay++;

        st=0;
        en=n;
        m=1;

        for(int k=1; k<=lay; k++)
        {
            for(int i=st; i<en; i++ )

                for(int j=st; j<en; j++)

                    ar[i][j]=m;

            st++;
            en--;
            m++;

        }


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j!=0)
                    printf(" ");
                printf("%3d",ar[i][j]);
            }
            printf("\n");

        }
        printf("\n");


    }

    return 0;



}
