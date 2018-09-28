#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef struct st srt;


int c,n;
char c1[200],c2[200];

int check2(int x)
{
    int p;
    for(p=0;p<c;p++)
    {
        if(c1[p]==x)
            break;
    }

    if(p==c)
        return -1;
    return p;
}

int check3(int x)
{
    int p;
    for(p=0;p<c;p++)
    {
        if(c2[p]==x)
            break;
    }

    if(p==c)
        return -1;
    return p;
}

int main()
{
    while(scanf("%d",&c)!=EOF)
    {
        scanf("%d",&n);
        cin.ignore();

        fgets(c1,200,stdin);
        fgets(c2,200,stdin);

        for(int i=0;i<c;i++)
        {
            c1[i]=tolower(c1[i]);
            c2[i]=tolower(c2[i]);
        }

        char m[2000];
        //getchar();
        for(int i =0;i<n;i++)
        {

            fgets(m,2000,stdin);

            for(int j=0;j<strlen(m);j++)
            {
                int k=check2(tolower(m[j]));

                if(k!=-1)
                {
                    if(islower(m[j]) || (m[j]>='0' && m[j]<='9'))
                        printf("%c",c2[k]);
                    else
                        printf("%c",toupper(c2[k]));
                }

                else
                {
                    int k2 = check3(tolower(m[j]));

                    if(k2!=-1)
                    {
                        if(islower(m[j])|| (m[j]>='0' && m[j]<='9'))
                            printf("%c",c1[k2]);
                        else
                            printf("%c",toupper(c1[k2]));
                    }

                    else printf("%c",m[j]);
                }
            }
            printf("\n");
        }

        printf("\n");
    }






}

