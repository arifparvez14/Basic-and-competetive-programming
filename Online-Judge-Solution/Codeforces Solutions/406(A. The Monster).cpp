#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,c,d,x=10000,ans=-1;
    cin>>a>>b>>c>>d;
    while(x--)
    {
        if(b<d)
        {
            b+=a;
        }
        else if(b>d)
        {
            d+=c;
        }
        else
        {
            ans=b;
            break;
        }
    }
    cout<<ans;
    return 0;
}
