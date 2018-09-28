#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef struct st st;
struct st
{
    int a,b,c;

} op[60];


struct op234
{
    string s;
    int ono;
    char ch;
} op2[60];


int main()
{
    int  t;

    while(scanf("%d",&t)!=EOF)
    {
        set<string>v;
        for(int i=1; i<=t; i++)
        {
            scanf("%d",&op[i].a);
            scanf("%d=%d",&op[i].b,&op[i].c);
        }

        for(int i=1; i<=t; i++)
        {

            cin>>op2[i].s;
            scanf("%d %c",&op2[i].ono,&op2[i].ch);
        }

        int cn=0;
        for(int i=1; i<=t; i++)
        {
            int f=0;
            int p=op2[i].ono;

            if(op2[i].ch=='+')
                if(op[p].a+op[p].b==op[p].c)
                {
                    f=1;
                    cn++;
                }


            if(op2[i].ch=='-')
                if(op[p].a-op[p].b==op[p].c)
                {
                    f=1;
                    cn++;
                }

            if(op2[i].ch=='*')
                if(op[p].a*op[p].b==op[p].c)
                {
                    f=1;
                    cn++;
                }


            if(op2[i].ch=='I')
                if((op[p].a+op[p].b!=op[p].c)&&(op[p].a*op[p].b!=op[p].c)&&(op[p].a-op[p].b!=op[p].c))
                {
                    f=1;
                    cn++;
                }

            if(f==0)
                v.insert(op2[i].s);

        }

        if(cn==t)
        {
            printf("You Shall All Pass!\n");
        }
        else if(cn==0)
        {
            printf("None Shall Pass!\n");
        }

        else
        {

            cout<<*v.begin();
            set<string>::iterator it;
            for(it=++v.begin(); it!=v.end(); it++)
            {
                cout<<" "<<*it;
            }
            printf("\n");
        }





    }





}

