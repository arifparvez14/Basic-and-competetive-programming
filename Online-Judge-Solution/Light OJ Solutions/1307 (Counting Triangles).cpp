#include <bits/stdc++.h>
#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define ll long long int
#define FOR(i,n) for(int i=0;i<n;i++)
#define FOR(i,m) for(int i=0;i<m;i++)
#define vll vector<ll>
#define mp make_pair
#define msll map<string, ll>
#define pb push_back
using namespace std;
ll n; vll v;
int main()
{
    fileread;
    ll t, ans,lo,hi,c;
    vll :: iterator it1,it2;
    cin>>t;
    for(ll cs = 1; cs <= t; cs++){
        cin>>n;
        c = 0;
        for(ll i =0; i < n; i++){
            ll x;
            cin>>x;
            v.pb(x);
        }
        sort(v.begin(),v.end());
        for(ll i = 0; i<n; i++)
        {
            for(ll j = i+1; j<n; j++)
            {
                lo = abs(v[j]-v[i])+1;
                hi = v[i] + v[j] -1;
                it1 = lower_bound(v.begin()+j+1,v.end(),lo);
                it2 = upper_bound(v.begin()+j+1,v.end(),hi);
                c = c + it2-it1;
            }
        }
      printf("Case %lld: %lld\n",cs,c);
      v.clear();
    }

    return 0;
}

