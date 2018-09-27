#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
char ar[100],ar2[100];








int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%s %s",ar,ar2);

        if(!strcmp(ar,ar2))
            printf("Caso #%d: De novo!\n",i+1);

        else
        {
            if(  !strcmp(ar,"pedra") && (   !strcmp(ar2,"lagarto") || !strcmp(ar2,"tesoura")     ) )
               printf("Caso #%d: Bazinga!\n",i+1);

            else if(!strcmp(ar,"pedra") && (!strcmp(ar2,"papel") || !strcmp(ar2,"Spock")) )
                printf("Caso #%d: Raj trapaceou!\n",i+1);

            else if(!strcmp(ar,"papel") && (!strcmp(ar2,"pedra") ||!(strcmp(ar2,"Spock") ) ))
               printf("Caso #%d: Bazinga!\n",i+1);

            else if(!strcmp(ar,"papel") && (!strcmp(ar2,"tesoura") || !strcmp(ar2,"lagarto")) )
                printf("Caso #%d: Raj trapaceou!\n",i+1);


            else if(!strcmp(ar,"tesoura") && (!strcmp(ar2,"papel") ||(!strcmp(ar2,"lagarto") ) ))
               printf("Caso #%d: Bazinga!\n",i+1);

            else if(!strcmp(ar,"tesoura") && (!strcmp(ar2,"Spock") || !strcmp(ar2,"pedra")) )
                printf("Caso #%d: Raj trapaceou!\n",i+1);


            else if(!strcmp(ar,"lagarto") && (!strcmp(ar2,"Spock") ||(!strcmp(ar2,"papel") ) ))
               printf("Caso #%d: Bazinga!\n",i+1);

            else if(!strcmp(ar,"lagarto") && (!strcmp(ar2,"pedra") || !strcmp(ar2,"tesoura")) )
                printf("Caso #%d: Raj trapaceou!\n",i+1);

            else if(!strcmp(ar,"Spock") && (!strcmp(ar2,"tesoura") ||(!strcmp(ar2,"pedra") ) ))
               printf("Caso #%d: Bazinga!\n",i+1);

            else if(!strcmp(ar,"Spock") && (!strcmp(ar2,"lagarto") || !strcmp(ar2,"papel")) )
                printf("Caso #%d: Raj trapaceou!\n",i+1);
        }
    }

    return 0;
}
