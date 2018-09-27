#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    int a,b;
    int res=0;

    while(scanf("%d",&a)!=EOF)
    {
        scanf("%d",&b);

        if(a==12 && b==25)
            printf("E natal!\n");

        else if(a==12 && b==24)
        printf("E vespera de natal!\n");

        else if (a==12 && b>25)
            printf("Ja passou!\n");

        else
        {
            if(a==1)
            {
                res=360-b;
            }
            if(a==2)
            {
                res=329-b;
            }
            if(a==3)
            {
                res=300-b;
            }
            if(a==4)
            {
                res=269-b;
            }
            if(a==5)
            {
                res=239-b;
            }
            if(a==6)
            {
                res=208-b;
            }
            if(a==7)
            {
                res=178-b;
            }
            if(a==8)
            {
                res=147-b;
            }
            if(a==9)
            {
                res=116-b;
            }
            if(a==10)
            {
                res=86-b;
            }
            if(a==11)
            {
                res=55-b;
            }
            if(a==12)
            {
                res=25-b;
            }

            printf("Faltam %d dias para o natal!\n",res);
        }


    }
    return 0;




}

