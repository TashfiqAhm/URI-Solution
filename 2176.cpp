#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    string s;
    cin>>s;

    int l=s.length();
    int c=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='1')
            c++;
    }

    if(c%2==0)
        s=s+'0';
    else s = s+'1';

    cout<<s<<endl;






}

