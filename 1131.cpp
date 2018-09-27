#include<stdio.h>

int main()
{
    int ig=0,gg=0,cnt=0,vi=0,vg=0,d=0,act=0;

    for(;;)
    {
        scanf("%d %d",&ig,&gg);

        cnt++;
        if(ig>gg)
            vi++;
        if(gg>ig)
            vg++;
        if(gg==ig)
            d++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&act);

        if(act==2)
        {
            printf("%d grenais\n",cnt);
            printf("Inter:%d\n",vi);
            printf("Gremio:%d\n",vg);
            printf("Empates:%d\n",d);

            if(vi>vg)
                printf("Inter venceu mais\n");
            if(vg>vi)
                printf("Gremio venceu mais\n");
            if(vg==vi)
                printf("Não houve vencedor\n");

            break;
        }


    }

}
