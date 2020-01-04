
#include <bits/stdc++.h>
#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define ll long long int
#define FOR(i,n) for(int i=0;i<n;i++)
#define vll vector<ll>
#define msll map<string, ll>
#define pb push_back
using namespace std;
int main()
{
    //fileread;
    ll n,x,sum=0;
    vll v;
    cin>>n>>x;
    FOR(i,n)
    {
        int a;
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    FOR(i,n)
    {
        if(x>1)
            sum += v[i]*x;
        else
            sum += v[i];

        x--;
    }
    cout<<sum;
    return 0;
}

