#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,n,maxSum,minSum;
    vector<ll> v;
    for(i=0;i<5;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    maxSum = v[1]+v[2]+v[3]+v[4];
    minSum = v[0]+v[1]+v[2]+v[3];
    cout<<minSum<<" "<<maxSum;
    return 0;
}
