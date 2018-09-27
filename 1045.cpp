#include<stdio.h>

int main()
{

    double ar[3],a,b,c;
    double temp;

    scanf("%lf %lf %lf",&ar[0],&ar[1],&ar[2]);

    for(int i = 0 ; i <3-1 ; i++)
        for(int j = 0 ; j<3-i-1 ; j++)
        {
            if(ar[j]<ar[j+1])
            {
                temp=ar[j+1];
                ar[j+1] = ar[j];
                ar[j]=temp;
            }

        }

    a=ar[0];
    b=ar[1];
    c=ar[2];




    if( a >= b+c)
        printf("NAO FORMA TRIANGULO\n");

    else if( a*a == b*b +c*c)
        printf("TRIANGULO RETANGULO\n");
    else if( a*a > b*b +c*c)
        printf("TRIANGULO OBTUSANGULO\n");
    else if( a*a < b*b +c*c)
        printf("TRIANGULO ACUTANGULO\n");


    if( a==b && b==c)
        printf("TRIANGULO EQUILATERO\n");
    else if(a==b || b==c || c==a)
        printf("TRIANGULO ISOSCELES\n");

        return 0;



}
