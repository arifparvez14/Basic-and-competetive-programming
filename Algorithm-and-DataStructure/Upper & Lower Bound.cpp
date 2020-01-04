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
int main()
{
    ll n,element,Lpos=-1,Rpos=-1,lo,hi,mid;
    vll v;
    fileread;
    cin>>n;
    lo = 0, hi = n-1;
    FOR(i,n)
    {
        ll a;
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    element = 20;
    while(lo <= hi){
        cout<<v[lo]<<" "<<v[hi]<<endl;
        mid = (lo+hi)/2;

        if(v[mid]<element) lo = mid + 1;
        else if (v[mid] >= element){
            Lpos = mid;
            hi = mid -1;
        }
    }
    lo = 0; hi = n-1;
    while(lo <= hi){
        cout<<v[lo]<<" "<<v[hi]<<endl;
        mid = (lo+hi)/2;

        if(v[mid] <= element){
          Rpos = mid;
          lo = mid + 1;
        }
        else if (v[mid] > element){
            hi = mid -1;
        }
    }

    cout<<Lpos<<" "<<Rpos<<endl;
    return 0;
}

