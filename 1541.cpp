#include<stdio.h>
#include<math.h>
int main()
{

    int a,b,c,res;
    double x;

    for(;;)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        scanf("%d %d",&b,&c);

        x=(a*b*100.0)/(c*1.0);

        res= sqrt(x);

        printf("%d\n",res);







    }
    return 0;




}
