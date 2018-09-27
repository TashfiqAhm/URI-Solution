#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int a,b,pos;
    //while(!(b==100))
    while(true)
    {
        pos=0;
        scanf("%d %d",&a,&b);
        //a=0;
        //b=50;

        if(a==0 && b==0)
            break;

        int c= b-a;

        if(c>150)
            pos=0;


        if(c==102 ||c==105 ||c==110||c ==120 || c ==150 )//||c ==52 || c==55 || c==60 ||c==70)
            pos=1;

        if(c ==52 || c==55 || c==60 ||c==70)
         {
            pos=1;
             //printf("%   d  ",pos);
         }


//        printf("hit  %d\n",c);

        if(c==22 ||c==25 ||c==30)
            pos=1;

        if(c==12 ||c==15)
            pos=1;

        if(c==7)
            pos=1;

        if(pos==1)
            printf("possible\n");
        else
            printf("impossible\n");
        // b++;




    }





}

