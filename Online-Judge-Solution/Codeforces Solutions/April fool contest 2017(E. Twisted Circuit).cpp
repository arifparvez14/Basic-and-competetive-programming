#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f;
    while(cin>>a>>b>>c>>d)
    {
        e=(((a^b)&(c|d))^((b&c)|(a^d)));
        if(e==1)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}

