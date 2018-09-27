#include<stdio.h>
#include<string.h>

int main()
{

    char a1[100],a2[100],a3[100];

    gets(a1);
    gets(a2);
    gets(a3);

    if(strcmp(a1,"vertebrado")==0)
    {
        if(strcmp(a2,"ave")==0)
        {
            if(strcmp(a3,"carnivoro")==0)
                printf("aguia\n");

            if(strcmp(a3,"onivoro")==0)
            printf("pomba\n");

        }

        if(strcmp(a2,"mamifero")==0)
        {
            if(strcmp(a3,"onivoro")==0)
                printf("homem\n");

            if(strcmp(a3,"herbivoro")==0)
            printf("vaca\n");

        }


    }

    if(strcmp(a1,"invertebrado")==0)
    {
        if(strcmp(a2,"inseto")==0)
        {
            if(strcmp(a3,"hematofago")==0)
                printf("pulga\n");

            if(strcmp(a3,"herbivoro")==0)
            printf("lagarta\n");

        }

        if(strcmp(a2,"anelideo")==0)
        {
            if(strcmp(a3,"hematofago")==0)
                printf("sanguessuga\n");

            if(strcmp(a3,"onivoro")==0)
            printf("minhoca\n");

        }

    }

    return 0;
}
