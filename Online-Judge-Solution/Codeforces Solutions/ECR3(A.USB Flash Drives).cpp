#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,i,c=0,x;
    vector<ll>v;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    for(i=0; i<n; i++)
    {
        if(m<=0)
            break;

        m -= v[i];
        c++;
    }
    cout<<c;
    return 0;
}
