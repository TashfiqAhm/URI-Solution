#include<stdio.h>

int main()
{
    int s1,s2,e1,e2;

    scanf("%d %d %d %d",&s1,&s2,&e1,&e2);

    if(e1==s1)
    {
        if(e2==s2)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,0);

        if(e2>s2)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",0,e2-s2);

        if(s2>e2)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",23,60-s2+e2);
    }

    if(e1>s1)
    {
        if(e2==s2)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e1-s1,0);

        if(e2>s2)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e1-s1,e2-s2);

        if(s2>e2)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e1-s1-1,60-s2+e2);

    }

    if(s1>e1)
    {
        if(e2==s2)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-s1+e1,0);

        if(e2>s2)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-s1+e1,e2-s2);

        if(s2>e2)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-s1+e1-1,60-s2+e2);
    }

    return 0;



}
