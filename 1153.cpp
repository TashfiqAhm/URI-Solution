#include<stdio.h>
int main()
{
    int n,result=1;;
    scanf("%d",&n);

    for(int i = n ; i>1 ;i--)
    {
        result=result*i;

    }

    printf("%d\n",result);
    return 0;

}
