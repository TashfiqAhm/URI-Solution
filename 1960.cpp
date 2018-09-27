#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


int main()
{

    int n,a,b,c;
    scanf("%d",&n);
    a=n/100;
    n=n%100;
    b=n/10;
    c=n%10;

    if(a==1) printf("C");
    else if(a==2) printf("CC");
    else if(a==3) printf("CCC");
    else if(a==4) printf("CD");
    else if(a==5) printf("D");
    else if(a==6) printf("DC");
    else if(a==7) printf("DCC");
    else if(a==8) printf("DCCC");
    else if(a==9) printf("CM");

    if(b==1) printf("X");
    else if(b==2) printf("XX");
    else if(b==3) printf("XXX");
    else if(b==4) printf("XL");
    else if(b==5) printf("L");
    else if(b==6) printf("LX");
    else if(b==7) printf("LXX");
    else if(b==8) printf("LXXX");
    else if(b==9) printf("XC");


    if(c==1) printf("I");
    else if(c==2) printf("II");
    else if(c==3) printf("III");
    else if(c==4) printf("IV");
    else if(c==5) printf("V");
    else if(c==6) printf("VI");
    else if(c==7) printf("VII");
    else if(c==8) printf("VIII");
    else if(c==9) printf("IX");

    printf("\n");

}

