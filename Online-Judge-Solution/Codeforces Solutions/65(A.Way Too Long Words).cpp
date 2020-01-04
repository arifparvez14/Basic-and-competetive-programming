#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,n,x;
    string s;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>s;
        x=s.length();
        if(x<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s[0]<<x-2<<s[x-1]<<endl;
        }

    }
    return 0;
}
