#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    float a,b,c;
    scanf("%f %f",&a,&b);

    printf("%f %f\n",a,b);


    c= b-a;

    float res =  (c/(a*1.0))*100;

    printf("%.2f\%\n",res);







}
