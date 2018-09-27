#include<stdio.h>

int main()
{
    float n;
    int a,b,c,d,e,f,g,h,i,j,k,l,nm,co;

    scanf("%f",&n);
    nm=n;

    co = (n -nm) * 100;

    a= nm/100;
    nm = nm%100;

    b= nm/50;
    nm= nm%50;

    c= nm/20;
    nm= nm%20;

    d= nm/10;
    nm= nm%10;

    e= nm/5;
    nm= nm%5;

    f= nm/2;
    nm= nm%2;

    g=nm/1;
    nm=nm%1;

    h=co/50;
    co=co%50;

    i=co/25;
    co=co%25;

    j=co/10;
    co=co%10;

    k=co/5;
    co=co%5;

    l=co/1;
    co=co%1;
    if(l!=0)
        l++;





    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);


    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",l);


}

