#include<stdio.h>
int ar[100][100];
int main()

{
    int n,m,st;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
            break;

        st=0;
        m=1;
        for(int k=0; k<n; k++)
        {
            for(int i=st,j=st;j<n;j++)
            {
                ar[i][j]=m;
                m++;
            }
            m=1;

            for(int j=st,i=st;i<n;i++)
            {
                ar[i][j]=m;
                m++;
            }
            m=1;
            st++;
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
