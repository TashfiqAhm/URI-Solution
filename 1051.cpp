#include<stdio.h>

int main()
{

    double a,b,c,d,result;
    scanf("%lf",&a);

    if(a<=2000)
        printf("Isento\n");

    else if(a>2000 && a<=3000)
    {
        b=a-2000.00;
        result = b *.08;
        printf("R$ %.2lf\n",result);
    }

    else if(a>3000 && a<=4500)
    {
        b=1000.00;
        c=a-3000.00;

        result = b*.08 + c*.18;

        printf("R$ %.2lf\n",result);

    }

    else if(a>4500)
    {
        b=1000.00;
        c=1500.00;
        d=a-4500.00;

        result = b*.08 + c*.18 + d*.28;

        printf("R$ %.2lf\n",result);
    }

    return 0;
}

