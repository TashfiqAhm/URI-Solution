#include<stdio.h>



int main()
{
    int d1,h1,m1,s1;
    int d2,h2,m2,s2;
    char ar[100];

    int fs,fm,fh,fd;

    scanf("%s%d",ar,&d1);

    scanf("%d%s%d%s%d",&h1,ar,&m1,ar,&s1);


    scanf("%s%d",ar,&d2);

    scanf("%d%s%d%s%d",&h2,ar,&m2,ar,&s2);


    if(s2>=s1)
    {
        fs=s2-s1;

        if(m2>=m1)
        {
            fm=m2-m1;

            if(h2>=h1)
            {
                fh=h2-h1;
                fd=d2-d1;
            }

            else if(h2<h1)
            {
                fh = 24-h1+h2;
                d1++;
                fd=d2-d1;
            }

        }

        else if(m2<m1)
        {
            fm=60+m2-m1;
            h1++;

            if(h2>=h1)
            {
                fh=h2-h1;
                fd=d2-d1;
            }

            else if(h2<h1)
            {
                fh = 24-h1+h2;
                d1++;
                fd=d2-d1;
            }
        }
    }

    else if(s2<s1)
    {
        fs=60-s1 + s2;
        m1++;

        if(m2>=m1)
        {
            fm=m2-m1;

            if(h2>=h1)
            {
                fh=h2-h1;
                fd=d2-d1;
            }

            else if(h2<h1)
            {
                fh = 24-h1+h2;
                d1++;
                fd=d2-d1;
            }

        }

        else if(m2<m1)
        {
            fm=60+m2-m1;
            h1++;

            if(h2>=h1)
            {
                fh=h2-h1;
                fd=d2-d1;
            }

            else if(h2<h1)
            {
                fh = 24-h1+h2;
                d1++;
                fd=d2-d1;
            }
        }
    }

    printf("%d dia(s)\n",fd);
    printf("%d hora(s)\n",fh);
    printf("%d minuto(s)\n",fm);
    printf("%d segundo(s)\n",fs);

    return 0;











}
