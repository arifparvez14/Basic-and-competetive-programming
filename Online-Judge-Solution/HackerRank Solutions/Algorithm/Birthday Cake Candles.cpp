#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,n,x,c=0;
    vector<ll> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
       if(v[i]==v[n-1])
        c++;
    }
    cout<<c;
    return 0;
}

