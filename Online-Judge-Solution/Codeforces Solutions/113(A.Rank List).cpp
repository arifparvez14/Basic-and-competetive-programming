#include <bits/stdc++.h>
#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define ll long long int
#define FOR(i,n) for(int i=0;i<n;i++)
#define vll vector<ll>
#define mp make_pair
#define msll map<string, ll>
#define pb push_back
using namespace std;
bool sortfun(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    if (a.first > b.first)
        return true;
    else if (a.first < b.first)
        return false;
    else if(a.second < b.second)
        return true;
    else
        return false;
}
int main()
{
    fileread;
    ll n,m,d,e,c=0;
    vector<pair<ll,ll>> v;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.pb(mp(a,b));
    }
    sort(v.begin(),v.end(),sortfun);
    d=v[m-1].first,e=v[m-1].second;
    for(ll i=m-1;i>0;i--)
    {
        if(v[i].first == d and v[i].second==e)
            c++;
        else
            break;
    }
    for(ll i=m;i<n;i++)
    {
        if(v[i].first == d and v[i].second==e)
            c++;
        else
            break;
    }
    cout<<c;
    return 0;
}




