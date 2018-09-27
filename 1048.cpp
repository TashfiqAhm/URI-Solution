#include<stdio.h>

int main()
{

    double salary,nes;

    scanf("%lf",&salary);

    if(salary>=0 && salary<=400)
    {
        nes= salary * .15;
        printf("Novo salario: %.2lf\n",salary+nes);
        printf("Reajuste ganho: %.2lf\n",nes);
        printf("Em percentual: 15 %%\n");
    }

    if(salary>400 && salary <=800)
    {
        nes= salary * .12;
        printf("Novo salario: %.2lf\n",salary+nes);
        printf("Reajuste ganho: %.2lf\n",nes);
        printf("Em percentual: 12 %%\n");

    }

    if(salary>800 && salary <= 1200)
    {
        nes= salary * .10;
        printf("Novo salario: %.2lf\n",salary+nes);
        printf("Reajuste ganho: %.2lf\n",nes);
        printf("Em percentual: 10 %%\n");

    }

    if(salary>1200 && salary <= 2000)
    {
        nes= salary * .07;
        printf("Novo salario: %.2lf\n",salary+nes);
        printf("Reajuste ganho: %.2lf\n",nes);
        printf("Em percentual: 7 %%\n");

    }

    if(salary>2000)
    {
        nes= salary * .04;
        printf("Novo salario: %.2lf\n",salary+nes);
        printf("Reajuste ganho: %.2lf\n",nes);
        printf("Em percentual: 4 %%\n");

    }
    return 0;

}
