#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[0];
    long long int i,a,d,n;
    while(cin>>n)
    {
        a=d=0;
        for(i=1;i<=n;i++)
        {

            cin>>s[0];
            if(s[0]=='A')
                a++;
            else if(s[0]=='D')
                d++;
        }
        if(a>d)
            cout<<"Anton"<<endl;
        else if(d>a)
            cout<<"Danik"<<endl;
        else
            cout<<"Friendship"<<endl;
    }
    return 0;
}
