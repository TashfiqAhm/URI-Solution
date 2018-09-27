#include<stdio.h>
#include<string.h>
char ar[1000];
int main()
{
    int n,car,s=0;
    while(1)
    {
        scanf("%s",ar);
        if(ar[0]=='-')
            break;

        s=0;

        int l=strlen(ar);

        if(l==1 && (ar[0]=='0' || ar[0]== '1'))
            printf("0\n");
        else{
            for(int i=l-1;i>=0;i--)
        {
            if(ar[i]>'0')
            {
                ar[i]=ar[i]-1;
                break;
            }

            if(ar[i]=='0')
            {
                ar[i]='9';
            }

        }

        for(int i=0;ar[i];i++)
        {
            if(ar[i]!='0')
                s=1;
            if(s==1)
                printf("%c",ar[i]);
        }
        printf("\n");

        }



    }


}


