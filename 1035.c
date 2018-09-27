#include<stdio.h>

int main()
{

    int a,b,c,d,e,flag=0;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(b>c && d>a)
        if((c+d)>(a+b))
            if(c>=0 && d>=0)
                if(a%2==0)
    {
        printf("Valores aceitos\n");
        flag=1;
    }

    if(flag==0)
        printf("Valores nao aceitos\n");
    return 0;
}
