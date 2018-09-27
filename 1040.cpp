#include<stdio.h>

int main()
{
    double a1,a2,a3,a4,fn,media;

    scanf("%lf %lf %lf %lf",&a1,&a2,&a3,&a4);
    media = (a1*2 + a2*3 + a3*4 + a4)/10.0;

    printf("Media: %.1f\n",media);

    if(media>=7.0)
        printf("Aluno aprovado.\n");
    else if(media<5.0)
        printf("Aluno reprovado.\n");

    else
    {
        printf("Aluno em exame.\n");


        scanf("%lf",&fn);

        printf("Nota do exame: %.1lf\n",fn);

        double t=(media+fn)/2.0;
        if(t>=5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1lf\n",t);

    }

    return 0;



}
