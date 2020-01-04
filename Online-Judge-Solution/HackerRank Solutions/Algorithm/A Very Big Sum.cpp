#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll sum=0,i,n,x;
    vector<ll>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<n;i++)
    {
       sum += v[i];
    }
    cout<<sum;
    return 0;
}
